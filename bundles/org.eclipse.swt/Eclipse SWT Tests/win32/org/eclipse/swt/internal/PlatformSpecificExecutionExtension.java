/*******************************************************************************
 * Copyright (c) 2024 Vector Informatik GmbH
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *******************************************************************************/
package org.eclipse.swt.internal;

import static org.junit.Assume.assumeTrue;

import java.net.*;

import org.junit.jupiter.api.extension.*;

public final class PlatformSpecificExecutionExtension implements BeforeAllCallback {
	private PlatformSpecificExecutionExtension()  {
	}

	@Override
	public void beforeAll(ExtensionContext context) throws Exception {
		assumeTrue("test is specific for Windows", isFittingOS());
		assumeTrue("architecture of platform does not match", isFittingArchitecture());
	}

	private static boolean isFittingOS() {
		return Library.os().equals("win32");
	}

	private static boolean isFittingArchitecture() {
		Class<?> thisClass = PlatformSpecificExecutionExtension.class;
		String thisClassResourcePath = thisClass.getName().replace('.', '/')  + ".class";
		URL thisClassURL = thisClass.getClassLoader().getResource(thisClassResourcePath); //$NON-NLS-1$
		return thisClassURL.toString().contains(Library.arch());
	}

}

