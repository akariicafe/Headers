@class NSString;

@interface UIContentUnavailableConstants_IOS : NSObject <UIContentUnavailableConstants>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConstants;

- (double)defaultEmptyTextToButtonPaddingForTraitCollection:(id)a0;
- (long long)defaultUserInterfaceRenderingMode;
- (id)defaultLoadingTextColor;
- (double)defaultEmptyTextToSecondaryTextPaddingForTraitCollection:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })defaultDirectionalLayoutMarginsForTraitCollection:(id)a0;
- (id)defaultEmptyImageTintColor;
- (id)defaultEmptyImageSymbolConfigurationForTraitCollection:(id)a0;
- (id)defaultLoadingTextFontForTraitCollection:(id)a0;
- (id)defaultLoadingImageTintColor;
- (id)defaultLoadingImageSymbolConfigurationForTraitCollection:(id)a0;
- (double)defaultEmptyButtonToSecondaryButtonPaddingForTraitCollection:(id)a0;
- (id)defaultEmptyTextFontForTraitCollection:(id)a0;
- (id)defaultEmptyTextColorForTraitCollection:(id)a0;
- (double)defaultEmptyImageToTextPaddingForTraitCollection:(id)a0;
- (id)defaultSecondaryTextColor;
- (BOOL)prefersSideBySideButtonAndSecondaryButton;
- (id)defaultEmptySecondaryTextFontForTraitCollection:(id)a0;
- (double)defaultLoadingImageToTextPaddingForTraitCollection:(id)a0;
- (id)defaultButtonConfigurationForTraitCollection:(id)a0;

@end
