@class NSString;
@protocol PVHostApplicationDelegate;

@interface CFXEffectHostAppDelegate : NSObject <PVHostApplicationDelegate>

@property (weak) id<PVHostApplicationDelegate> colorSpaceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

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
- (BOOL)wantsToLimitLinesOfText;
- (BOOL)wantsToScaleEmojiToCapHeight;
- (BOOL)wantsToSetTranscriptionsUsingArray;
- (BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (BOOL)wantsToUseBinarySearchForScalingToBothMargins;
- (BOOL)wantsToUseCachedTextureForText;

@end
