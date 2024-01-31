@class ICTTZoomController, NSString;

@interface ICTTTextController : NSObject <ICTTTextStorageStyler>

@property (nonatomic) BOOL showsEditorDebugTooltips;
@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (retain, nonatomic) ICTTZoomController *zoomController;
@property (nonatomic) BOOL keepNSTextTableAttributes;
@property (nonatomic) BOOL disableSingleLineA;
@property (nonatomic, getter=isInPreviewMode) BOOL inPreviewMode;
@property (nonatomic) BOOL isForPrint;
@property (nonatomic) BOOL disableAddingExtraLinesIfNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (id)preferredFontForICTTTextStyle:(unsigned int)a0;
+ (double)superscriptScaleFactor;

- (id)titleAttributes;
- (id)init;
- (void).cxx_destruct;
- (id)defaultParagraphStyle;
- (void)styleFontInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addBIToStyle:(id)a0;
- (id)bodyAttributes;
- (id)bodyAttributesWithContentSizeCategory:(id)a0;
- (id)captionAttributes;
- (id)captionAttributesWithContentSizeCategory:(id)a0;
- (id)checklistAttributes;
- (id)checklistAttributesWithContentSizeCategory:(id)a0;
- (id)copyAttribute:(id)a0 fromAttributes:(id)a1 toAttributes:(id)a2;
- (id)copyNSParagraphStylefromAttributes:(id)a0 toAttributes:(id)a1;
- (id)defaultListAttributes;
- (id)defaultListAttributesWithContentSizeCategory:(id)a0;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)filterStyleAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixModelAttributesInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)fixedWidthAttributes;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)a0;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)a0;
- (id)headingAttributes;
- (id)headingAttributesWithContentSizeCategory:(id)a0;
- (id)modelForStyleAttributes:(id)a0 filterAttributes:(BOOL)a1;
- (id)modelForStyleAttributes:(id)a0 filterAttributes:(BOOL)a1 pasteboardAttributedString:(id)a2;
- (id)preferredAttributesForICTTTextStyle:(unsigned int)a0;
- (id)referenceAttributesForLocation:(unsigned long long)a0 textStorage:(id)a1 currentParagraphStart:(unsigned long long)a2;
- (id)removeAttribute:(id)a0 ifInconsistentAtLocation:(unsigned long long)a1 inTextStorage:(id)a2 forNewTypingAttributes:(id)a3;
- (void)resetGuessedFontSizes;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)a0 atTheEndOfDocument:(BOOL)a1 isTyping:(BOOL)a2;
- (void)styleFontInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 contentSizeCategory:(id)a2;
- (id)styleForModelAttributes:(id)a0;
- (id)styleForModelAttributes:(id)a0 contentSizeCategory:(id)a1;
- (void)styleListsAndIndentsInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)styleText:(id)a0 inExactRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(BOOL)a2;
- (void)styleText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(BOOL)a2;
- (id)subheadingAttributes;
- (id)subheadingAttributesWithContentSizeCategory:(id)a0;
- (id)titleAttributesWithContentSizeCategory:(id)a0;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(BOOL)a1 currentTypingAttributes:(id)a2 inTextStorage:(id)a3;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(BOOL)a1 forSettingTextStyle:(BOOL)a2 currentTypingAttributes:(id)a3 inTextStorage:(id)a4;
- (id)typingAttributesForSettingTextStyleForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 currentTypingAttributes:(id)a1 inTextStorage:(id)a2;

@end
