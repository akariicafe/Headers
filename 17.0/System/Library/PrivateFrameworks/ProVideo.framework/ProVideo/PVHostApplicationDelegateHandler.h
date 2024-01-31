@class NSString;
@protocol PVHostApplicationDelegate;

@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate>

@property (retain, nonatomic) id<PVHostApplicationDelegate> hostApplicationDelegate;
@property (nonatomic) BOOL cacheDelegateResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsToCacheTopLevelGroupRender;
- (id)effectTemplatesBundle;
- (id)effectTemplatesDirectoryName;
- (unsigned int)getMaxGlyphResolution;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;
- (BOOL)wantsDynamicLineSpacingForDiacritics;
- (BOOL)wantsExtraLineSpacingForDiacritics;
- (BOOL)wantsSameAlignmentForAllLinesOfText;
- (BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (BOOL)wantsToAssertThatLoadedSceneHasAnimateFlagDisabled;
- (BOOL)wantsToAssertThatTopLevelGroupSpansEntireScene;
- (BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (BOOL)wantsToDownscaleGlyphsToOutputSize;
- (BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
- (BOOL)wantsToImproveQualityOfDraftQualityText;
- (BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
- (BOOL)wantsToIncludeTrackingValueInAttributedString;
- (BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
- (BOOL)wantsToLimitLinesOfText;
- (BOOL)wantsToScaleEmojiToCapHeight;
- (BOOL)wantsToSetTranscriptionsUsingArray;
- (BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (BOOL)wantsToUseBinarySearchForScalingToBothMargins;
- (BOOL)wantsToUseCachedTextureForText;

@end
