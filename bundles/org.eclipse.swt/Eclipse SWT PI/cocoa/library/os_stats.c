/*******************************************************************************
 * Copyright (c) 2000, 2019 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

char * OS_nativeFunctionNames[] = {
	"ATSFontActivateFromFileReference",
	"AcquireRootMenu",
	"CALLBACK_1NSTextAttachmentCell_1attachment",
	"CALLBACK_1NSTextAttachmentCell_1cellSize",
	"CALLBACK_1accessibilityHitTest_1",
	"CALLBACK_1attributedSubstringFromRange_1",
	"CALLBACK_1cacheDisplayInRect_1toBitmapImageRep_1",
	"CALLBACK_1canDragRowsWithIndexes_1atPoint_1",
	"CALLBACK_1cellBaselineOffset",
	"CALLBACK_1cellSize",
	"CALLBACK_1cellSizeForBounds_1",
	"CALLBACK_1characterIndexForPoint_1",
	"CALLBACK_1columnAtPoint_1",
	"CALLBACK_1dragSelectionWithEvent_1offset_1slideBack_1",
	"CALLBACK_1draggedImage_1beganAt_1",
	"CALLBACK_1draggedImage_1endedAt_1operation_1",
	"CALLBACK_1drawBackgroundInClipRect_1",
	"CALLBACK_1drawBezelWithFrame_1inView_1",
	"CALLBACK_1drawImage_1withFrame_1inView_1",
	"CALLBACK_1drawInteriorWithFrame_1inView_1",
	"CALLBACK_1drawLabel_1inRect_1",
	"CALLBACK_1drawRect_1",
	"CALLBACK_1drawTitle_1withFrame_1inView_1",
	"CALLBACK_1drawViewBackgroundInRect_1",
	"CALLBACK_1drawWithExpansionFrame_1inView_1",
	"CALLBACK_1expansionFrameWithFrame_1inView_1",
	"CALLBACK_1firstRectForCharacterRange_1",
	"CALLBACK_1focusRingMaskBoundsForFrame_1inView_1",
	"CALLBACK_1headerRectOfColumn_1",
	"CALLBACK_1highlightSelectionInClipRect_1",
	"CALLBACK_1hitTestForEvent_1inRect_1ofView_1",
	"CALLBACK_1hitTest_1",
	"CALLBACK_1imageRectForBounds_1",
	"CALLBACK_1markedRange",
	"CALLBACK_1scrollClipView_1toPoint_1",
	"CALLBACK_1selectedRange",
	"CALLBACK_1setFrameOrigin_1",
	"CALLBACK_1setFrameSize_1",
	"CALLBACK_1setFrame_1",
	"CALLBACK_1setMarkedText_1selectedRange_1",
	"CALLBACK_1setNeedsDisplayInRect_1",
	"CALLBACK_1shouldChangeTextInRange_1replacementString_1",
	"CALLBACK_1sizeOfLabel_1",
	"CALLBACK_1textView_1willChangeSelectionFromCharacterRange_1toCharacterRange_1",
	"CALLBACK_1titleRectForBounds_1",
	"CALLBACK_1view_1stringForToolTip_1point_1userData_1",
	"CALLBACK_1webView_1setFrame_1",
	"CFAttributedStringCreate",
	"CFDataGetBytePtr",
	"CFDataGetLength",
	"CFDictionaryAddValue",
	"CFDictionaryCreateMutable",
	"CFRange_1sizeof",
	"CFRelease",
	"CFRunLoopAddObserver",
	"CFRunLoopGetCurrent",
	"CFRunLoopObserverCreate",
	"CFRunLoopObserverInvalidate",
	"CFRunLoopRunInMode",
	"CFRunLoopStop",
	"CFStringCreateWithCharacters",
	"CFURLCreateFromFSRef",
	"CFURLCreateStringByAddingPercentEscapes",
	"CGAffineTransform_1sizeof",
	"CGBitmapContextCreate",
	"CGBitmapContextCreateImage",
	"CGBitmapContextGetData",
	"CGColorCreate",
	"CGColorRelease",
	"CGColorSpaceCreateDeviceRGB",
	"CGColorSpaceRelease",
	"CGContextAddPath",
	"CGContextBeginTransparencyLayerWithRect",
	"CGContextCopyPath",
	"CGContextCopyWindowContentsToRect",
	"CGContextDrawImage",
	"CGContextEndTransparencyLayer",
	"CGContextFillRect",
	"CGContextRelease",
	"CGContextReplacePathWithStrokedPath",
	"CGContextRestoreGState",
	"CGContextSaveGState",
	"CGContextScaleCTM",
	"CGContextSetBlendMode",
	"CGContextSetFillColor",
	"CGContextSetFillColorSpace",
	"CGContextSetLineCap",
	"CGContextSetLineDash",
	"CGContextSetLineJoin",
	"CGContextSetLineWidth",
	"CGContextSetMiterLimit",
	"CGContextSetShouldAntialias",
	"CGContextSetTextDrawingMode",
	"CGContextSetTextMatrix",
	"CGContextSetTextPosition",
	"CGContextStrokePath",
	"CGContextTranslateCTM",
	"CGDataProviderCreateWithData",
	"CGDataProviderRelease",
	"CGDisplayBaseAddress",
	"CGDisplayBitsPerPixel",
	"CGDisplayBitsPerSample",
	"CGDisplayBounds",
	"CGDisplayBytesPerRow",
	"CGDisplayCreateImage",
	"CGDisplayPixelsHigh",
	"CGDisplayPixelsWide",
	"CGEventCreateKeyboardEvent",
	"CGEventCreateMouseEvent",
	"CGEventCreateScrollWheelEvent",
	"CGEventGetIntegerValueField",
	"CGEventPost",
	"CGEventSourceCreate",
	"CGGetDisplaysWithRect",
	"CGImageCreate",
	"CGImageGetHeight",
	"CGImageGetWidth",
	"CGImageRelease",
	"CGPathAddCurveToPoint",
	"CGPathAddLineToPoint",
	"CGPathAddRect",
	"CGPathApply",
	"CGPathCloseSubpath",
	"CGPathCreateCopy",
	"CGPathCreateMutable",
	"CGPathElement_1sizeof",
	"CGPathMoveToPoint",
	"CGPathRelease",
	"CGPoint_1sizeof",
	"CGRect_1sizeof",
	"CGSize_1sizeof",
	"CGWarpMouseCursorPosition",
	"CPSSetProcessName",
	"CTFontGetAscent",
	"CTFontGetDescent",
	"CTFontGetLeading",
	"CTFontManagerRegisterFontsForURL",
	"CTLineCreateWithAttributedString",
	"CTLineDraw",
	"CTLineGetTypographicBounds",
	"CTParagraphStyleCreate",
	"CTParagraphStyleSetting_1sizeof",
	"CTTypesetterCreateLine",
	"CTTypesetterCreateWithAttributedString",
	"CTTypesetterSuggestLineBreak",
	"CancelMenuTracking",
	"CloseRgn",
	"CopyRgn",
	"DeleteGlobalRef",
	"DeleteMenuItem",
	"DiffRgn",
	"DisposeRgn",
	"EmptyRgn",
	"FSPathMakeRef",
	"FindWindow",
	"GetCurrentEventButtonState",
	"GetCurrentProcess",
	"GetDblTime",
	"GetIconRefFromTypeInfo",
	"GetIndMenuItemWithCommandID",
	"GetRegionBounds",
	"GetSystemUIMode",
	"GetThemeMetric",
	"HIThemeDrawFocusRect",
	"HIWindowGetCGWindowID",
	"JNIGetObject",
	"JSEvaluateScript",
	"JSStringCreateWithUTF8CString",
	"JSStringRelease",
	"LMGetKbdType",
	"LSGetApplicationForInfo",
	"LineTo",
	"MoveTo",
	"NSAccessibilityActionDescription",
	"NSAccessibilityAttributedStringForRangeParameterizedAttribute",
	"NSAccessibilityBackgroundColorTextAttribute",
	"NSAccessibilityBoundsForRangeParameterizedAttribute",
	"NSAccessibilityButtonRole",
	"NSAccessibilityCellForColumnAndRowParameterizedAttribute",
	"NSAccessibilityCellRole",
	"NSAccessibilityCheckBoxRole",
	"NSAccessibilityChildrenAttribute",
	"NSAccessibilityColorWellRole",
	"NSAccessibilityColumnIndexRangeAttribute",
	"NSAccessibilityColumnRole",
	"NSAccessibilityColumnsAttribute",
	"NSAccessibilityComboBoxRole",
	"NSAccessibilityConfirmAction",
	"NSAccessibilityContentsAttribute",
	"NSAccessibilityDescriptionAttribute",
	"NSAccessibilityDialogSubrole",
	"NSAccessibilityEnabledAttribute",
	"NSAccessibilityExpandedAttribute",
	"NSAccessibilityFloatingWindowSubrole",
	"NSAccessibilityFocusedAttribute",
	"NSAccessibilityFocusedUIElementChangedNotification",
	"NSAccessibilityFocusedWindowChangedNotification",
	"NSAccessibilityFontFamilyKey",
	"NSAccessibilityFontNameKey",
	"NSAccessibilityFontSizeKey",
	"NSAccessibilityFontTextAttribute",
	"NSAccessibilityForegroundColorTextAttribute",
	"NSAccessibilityGridRole",
	"NSAccessibilityGroupRole",
	"NSAccessibilityHeaderAttribute",
	"NSAccessibilityHelpAttribute",
	"NSAccessibilityHelpTagRole",
	"NSAccessibilityHorizontalOrientationValue",
	"NSAccessibilityHorizontalScrollBarAttribute",
	"NSAccessibilityImageRole",
	"NSAccessibilityIncrementorRole",
	"NSAccessibilityIndexAttribute",
	"NSAccessibilityInsertionPointLineNumberAttribute",
	"NSAccessibilityLabelValueAttribute",
	"NSAccessibilityLineForIndexParameterizedAttribute",
	"NSAccessibilityLinkRole",
	"NSAccessibilityLinkTextAttribute",
	"NSAccessibilityLinkedUIElementsAttribute",
	"NSAccessibilityListRole",
	"NSAccessibilityMaxValueAttribute",
	"NSAccessibilityMenuBarRole",
	"NSAccessibilityMenuButtonRole",
	"NSAccessibilityMenuItemRole",
	"NSAccessibilityMenuRole",
	"NSAccessibilityMinValueAttribute",
	"NSAccessibilityMisspelledTextAttribute",
	"NSAccessibilityMovedNotification",
	"NSAccessibilityNextContentsAttribute",
	"NSAccessibilityNumberOfCharactersAttribute",
	"NSAccessibilityOrientationAttribute",
	"NSAccessibilityOutlineRole",
	"NSAccessibilityOutlineRowSubrole",
	"NSAccessibilityParentAttribute",
	"NSAccessibilityPopUpButtonRole",
	"NSAccessibilityPositionAttribute",
	"NSAccessibilityPostNotification",
	"NSAccessibilityPressAction",
	"NSAccessibilityPreviousContentsAttribute",
	"NSAccessibilityProgressIndicatorRole",
	"NSAccessibilityRTFForRangeParameterizedAttribute",
	"NSAccessibilityRadioButtonRole",
	"NSAccessibilityRadioGroupRole",
	"NSAccessibilityRaiseBadArgumentException",
	"NSAccessibilityRangeForIndexParameterizedAttribute",
	"NSAccessibilityRangeForLineParameterizedAttribute",
	"NSAccessibilityRangeForPositionParameterizedAttribute",
	"NSAccessibilityResizedNotification",
	"NSAccessibilityRoleAttribute",
	"NSAccessibilityRoleDescription",
	"NSAccessibilityRoleDescriptionAttribute",
	"NSAccessibilityRoleDescriptionForUIElement",
	"NSAccessibilityRowCountChangedNotification",
	"NSAccessibilityRowIndexRangeAttribute",
	"NSAccessibilityRowRole",
	"NSAccessibilityRowsAttribute",
	"NSAccessibilityScrollAreaRole",
	"NSAccessibilityScrollBarRole",
	"NSAccessibilitySelectedAttribute",
	"NSAccessibilitySelectedChildrenAttribute",
	"NSAccessibilitySelectedChildrenChangedNotification",
	"NSAccessibilitySelectedColumnsAttribute",
	"NSAccessibilitySelectedRowsAttribute",
	"NSAccessibilitySelectedRowsChangedNotification",
	"NSAccessibilitySelectedTextAttribute",
	"NSAccessibilitySelectedTextChangedNotification",
	"NSAccessibilitySelectedTextRangeAttribute",
	"NSAccessibilitySelectedTextRangesAttribute",
	"NSAccessibilityServesAsTitleForUIElementsAttribute",
	"NSAccessibilityShowMenuAction",
	"NSAccessibilitySizeAttribute",
	"NSAccessibilitySliderRole",
	"NSAccessibilitySplitterRole",
	"NSAccessibilityStandardWindowSubrole",
	"NSAccessibilityStaticTextRole",
	"NSAccessibilityStrikethroughColorTextAttribute",
	"NSAccessibilityStrikethroughTextAttribute",
	"NSAccessibilityStringForRangeParameterizedAttribute",
	"NSAccessibilityStyleRangeForIndexParameterizedAttribute",
	"NSAccessibilitySubroleAttribute",
	"NSAccessibilitySuperscriptTextAttribute",
	"NSAccessibilitySystemDialogSubrole",
	"NSAccessibilityTabGroupRole",
	"NSAccessibilityTableRole",
	"NSAccessibilityTableRowSubrole",
	"NSAccessibilityTabsAttribute",
	"NSAccessibilityTextAreaRole",
	"NSAccessibilityTextFieldRole",
	"NSAccessibilityTextLinkSubrole",
	"NSAccessibilityTitleAttribute",
	"NSAccessibilityTitleChangedNotification",
	"NSAccessibilityTitleUIElementAttribute",
	"NSAccessibilityToolbarRole",
	"NSAccessibilityTopLevelUIElementAttribute",
	"NSAccessibilityURLAttribute",
	"NSAccessibilityUnderlineColorTextAttribute",
	"NSAccessibilityUnderlineTextAttribute",
	"NSAccessibilityUnignoredAncestor",
	"NSAccessibilityUnignoredChildren",
	"NSAccessibilityUnignoredChildrenForOnlyChild",
	"NSAccessibilityUnignoredDescendant",
	"NSAccessibilityUnknownRole",
	"NSAccessibilityUnknownSubrole",
	"NSAccessibilityValueAttribute",
	"NSAccessibilityValueChangedNotification",
	"NSAccessibilityValueDescriptionAttribute",
	"NSAccessibilityValueIndicatorRole",
	"NSAccessibilityVerticalOrientationValue",
	"NSAccessibilityVerticalScrollBarAttribute",
	"NSAccessibilityVisibleCharacterRangeAttribute",
	"NSAccessibilityVisibleChildrenAttribute",
	"NSAccessibilityVisibleColumnsAttribute",
	"NSAccessibilityVisibleNameKey",
	"NSAccessibilityVisibleRowsAttribute",
	"NSAccessibilityWindowAttribute",
	"NSAccessibilityWindowRole",
	"NSAffineTransformStruct_1sizeof",
	"NSApplicationDidChangeScreenParametersNotification",
	"NSAttachmentAttributeName",
	"NSBackgroundColorAttributeName",
	"NSBaselineOffsetAttributeName",
	"NSBeep",
	"NSBitsPerPixelFromDepth",
	"NSCalibratedRGBColorSpace",
	"NSCursorAttributeName",
	"NSDefaultRunLoopMode",
	"NSDeviceRGBColorSpace",
	"NSDeviceResolution",
	"NSDragPboard",
	"NSEqualRects",
	"NSEventTrackingRunLoopMode",
	"NSFileTypeForHFSTypeCode",
	"NSFilenamesPboardType",
	"NSFontAttributeName",
	"NSForegroundColorAttributeName",
	"NSGetSizeAndAlignment",
	"NSIntersectionRect",
	"NSLigatureAttributeName",
	"NSLinkAttributeName",
	"NSLocaleLanguageCode",
	"NSModalPanelRunLoopMode",
	"NSNotFound",
	"NSNumberOfColorComponents",
	"NSObliquenessAttributeName",
	"NSOperatingSystemVersion_1sizeof",
	"NSOutlineViewColumnDidMoveNotification",
	"NSParagraphStyleAttributeName",
	"NSPasteboardTypeHTML",
	"NSPasteboardTypeRTF",
	"NSPasteboardTypeString",
	"NSPointInRect",
	"NSPoint_1sizeof",
	"NSPrintAllPages",
	"NSPrintCopies",
	"NSPrintFirstPage",
	"NSPrintJobDisposition",
	"NSPrintLastPage",
	"NSPrintMustCollate",
	"NSPrintOrientation",
	"NSPrintPreviewJob",
	"NSPrintSaveJob",
	"NSPrintSavePath",
	"NSPrintScalingFactor",
	"NSPrintSpoolJob",
	"NSRange_1sizeof",
	"NSRectFillUsingOperation",
	"NSRect_1sizeof",
	"NSSearchPathForDirectoriesInDomains",
	"NSSize_1sizeof",
	"NSSpellingStateAttributeName",
	"NSSquareStatusItemLength",
	"NSStrikethroughColorAttributeName",
	"NSStrikethroughStyleAttributeName",
	"NSStrokeWidthAttributeName",
	"NSSystemColorsDidChangeNotification",
	"NSTIFFPboardType",
	"NSTableViewColumnDidMoveNotification",
	"NSTemporaryDirectory",
	"NSToolbarCustomizeToolbarItemIdentifier",
	"NSToolbarDidRemoveItemNotification",
	"NSToolbarFlexibleSpaceItemIdentifier",
	"NSToolbarPrintItemIdentifier",
	"NSToolbarSeparatorItemIdentifier",
	"NSToolbarShowColorsItemIdentifier",
	"NSToolbarShowFontsItemIdentifier",
	"NSToolbarSpaceItemIdentifier",
	"NSToolbarWillAddItemNotification",
	"NSURLPboardType",
	"NSUnderlineColorAttributeName",
	"NSUnderlineStyleAttributeName",
	"NSViewGlobalFrameDidChangeNotification",
	"NSWindowDidBecomeKeyNotification",
	"NSWindowDidDeminiaturizeNotification",
	"NSWindowDidMiniaturizeNotification",
	"NSWindowDidMoveNotification",
	"NSWindowDidResignKeyNotification",
	"NSWindowDidResizeNotification",
	"NSWindowWillCloseNotification",
	"NewGlobalRef",
	"NewRgn",
	"OffsetRgn",
	"OpenRgn",
	"PMGetDuplex",
	"PMPrinterGetIndexedPrinterResolution",
	"PMPrinterGetOutputResolution",
	"PMPrinterGetPrinterResolutionCount",
	"PMSessionGetCurrentPrinter",
	"PMSessionGetDestinationType",
	"PMSetDuplex",
	"PtInRgn",
	"QDRegionToRects",
	"RectInRgn",
	"RectRgn",
	"SecPolicySearchCopyNext",
	"SecPolicySearchCreate",
	"SecTrustCreateWithCertificates",
	"SectRgn",
	"SetRect",
	"SetSystemUIMode",
	"SetThemeCursor",
	"TISCopyCurrentKeyboardInputSource",
	"TISGetInputSourceProperty",
	"TransformProcessType",
	"UCKeyTranslate",
	"UTTypeEqual",
	"UnionRgn",
	"_1_1BIG_1ENDIAN_1_1",
	"beginSheetModalForWindow",
	"call",
	"class_1addIvar",
	"class_1addMethod",
	"class_1addProtocol",
	"class_1createInstance",
	"class_1getClassMethod",
	"class_1getInstanceMethod",
	"class_1getMethodImplementation",
	"class_1getName",
	"class_1getSuperclass",
	"getpid",
	"instrumentObjcMessageSends",
	"isFlipped_1CALLBACK",
	"kCFAllocatorDefault",
	"kCFRunLoopCommonModes",
	"kCFTypeDictionaryKeyCallBacks",
	"kCFTypeDictionaryValueCallBacks",
	"kCTFontAttributeName",
	"kCTForegroundColorAttributeName",
	"kCTParagraphStyleAttributeName",
	"kTISPropertyUnicodeKeyLayoutData",
	"kUTTypeFileURL",
	"kUTTypeURL",
	"memmove__JLorg_eclipse_swt_internal_cocoa_CGPathElement_2J",
	"memmove__JLorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"memmove__JLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"memmove__JLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"memmove__JLorg_eclipse_swt_internal_cocoa_NSSize_2J",
	"memmove__Lorg_eclipse_swt_internal_cocoa_CGPathElement_2JJ",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJ",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJ",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJ",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJ",
	"method_1setImplementation",
	"objc_1allocateClassPair",
	"objc_1disposeClassPair",
	"objc_1getClass",
	"objc_1getMetaClass",
	"objc_1getProtocol",
	"objc_1lookUpClass",
	"objc_1msgSend__JJ",
	"objc_1msgSend__JJD",
	"objc_1msgSend__JJDD",
	"objc_1msgSend__JJDDDD",
	"objc_1msgSend__JJDJ",
	"objc_1msgSend__JJDJJJZ",
	"objc_1msgSend__JJI",
	"objc_1msgSend__JJJ",
	"objc_1msgSend__JJJD",
	"objc_1msgSend__JJJJ",
	"objc_1msgSend__JJJJDJ",
	"objc_1msgSend__JJJJJ",
	"objc_1msgSend__JJJJJD",
	"objc_1msgSend__JJJJJJ",
	"objc_1msgSend__JJJJJJJ",
	"objc_1msgSend__JJJJJJJJ",
	"objc_1msgSend__JJJJJJJJJ",
	"objc_1msgSend__JJJJJJJZZJJJ",
	"objc_1msgSend__JJJJJJJZZJJJJ",
	"objc_1msgSend__JJJJJZ",
	"objc_1msgSend__JJJJLorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__JJJJZ",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2JDJJJJJ",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2JDJJSJJ",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSSize_2JJJZ",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSend__JJJZ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2DDD",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2DDDZ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_3D",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2JD",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2JJJJ_3B",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRange_2J_3J",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2D",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2DD",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJJ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJZ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJZJ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JZJ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRect_2JD",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Z",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2ZZ",
	"objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend__JJZ",
	"objc_1msgSend__JJZJ",
	"objc_1msgSend__JJZLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend__JJ_3B",
	"objc_1msgSend__JJ_3BJ",
	"objc_1msgSend__JJ_3C",
	"objc_1msgSend__JJ_3CJ",
	"objc_1msgSend__JJ_3CLorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__JJ_3D",
	"objc_1msgSend__JJ_3DJD",
	"objc_1msgSend__JJ_3I",
	"objc_1msgSend__JJ_3IJ",
	"objc_1msgSend__JJ_3J",
	"objc_1msgSend__JJ_3JII",
	"objc_1msgSend__JJ_3JJJ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2J",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJJJ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJJZ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJZ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZ",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJ",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2J",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZ",
	"objc_1msgSend_1bool__JJ",
	"objc_1msgSend_1bool__JJJ",
	"objc_1msgSend_1bool__JJJJ",
	"objc_1msgSend_1bool__JJJJJ",
	"objc_1msgSend_1bool__JJJJJJ",
	"objc_1msgSend_1bool__JJJJJJJ",
	"objc_1msgSend_1bool__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend_1bool__JJJLorg_eclipse_swt_internal_cocoa_NSSize_2Z",
	"objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1bool__JJS",
	"objc_1msgSend_1floatret",
	"objc_1msgSend_1fpret__JJ",
	"objc_1msgSend_1fpret__JJJ",
	"objc_1msgSend_1fpret__JJJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSOperatingSystemVersion_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJJZ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRange_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2J",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2JJJJJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2ZZJ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJZ",
	"objc_1registerClassPair",
	"objc_1super_1sizeof",
	"object_1getClass",
	"object_1getClassName",
	"object_1getInstanceVariable",
	"object_1setClass",
	"object_1setInstanceVariable",
	"sel_1getName",
	"sel_1registerName",
};
#define NATIVE_FUNCTION_COUNT sizeof(OS_nativeFunctionNames) / sizeof(char*)
int OS_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int OS_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
