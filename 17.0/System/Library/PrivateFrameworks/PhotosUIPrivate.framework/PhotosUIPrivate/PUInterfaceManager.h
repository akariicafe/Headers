@protocol PUInterfaceTheme;

@interface PUInterfaceManager : NSObject

@property (class, readonly) id<PUInterfaceTheme> currentTheme;

+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)endDisablingUserInteraction:(id)a0;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (id)beginDisablingUserInteractionForReason:(long long)a0;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;
+ (id)beginDisablingUserInteractionForReason:(long long)a0 withExpectedTimeout:(double)a1;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;

@end
