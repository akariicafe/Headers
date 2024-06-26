@class NSExtension, NSString, NSArray, UIImage, NSAttributedString, NSUUID, NSURL, _UIActivityResourceLoader, UIViewController, UIColor;

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {
    long long _defaultPriority;
    _UIActivityResourceLoader *_activityImageLoader;
    _UIActivityResourceLoader *_activitySettingsImageLoader;
    BOOL _isInsideDescription;
    NSURL *_representationCacheURL;
}

@property (class, readonly, nonatomic) long long _activityStyle;
@property (class, readonly, nonatomic) long long activityCategory;

@property (readonly, nonatomic) NSString *_activitySubtitle;
@property (readonly, nonatomic) NSAttributedString *_activityFooterText;
@property (readonly, nonatomic) BOOL _isDisabled;
@property (readonly, nonatomic) NSString *_activityBadgeText;
@property (readonly, nonatomic) UIColor *_activityBadgeColor;
@property (readonly, nonatomic) UIColor *_activityBadgeTextColor;
@property (readonly, nonatomic) UIImage *_activityStatusImage;
@property (readonly, nonatomic) UIColor *_activityStatusTintColor;
@property (retain, nonatomic) NSString *activitySectionIdentifier;
@property (readonly, nonatomic) NSString *_heroActionTitle;
@property (readonly, nonatomic) NSExtension *applicationExtension;
@property (copy, nonatomic) id /* block */ activityCompletionWithItemsHandler;
@property (copy, nonatomic) NSString *activitySectionIdentifier;
@property (copy, nonatomic) id /* block */ didFinishPerformingActivityHandler;
@property (nonatomic) long long maxPreviews;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) NSArray *preferredLocalizations;
@property (nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (readonly, nonatomic) _UIActivityResourceLoader *_activityImageLoader;
@property (readonly, nonatomic) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property (readonly, nonatomic) id /* block */ _backgroundPreheatBlock;
@property (readonly, nonatomic) BOOL _isBuiltinDerived;
@property (readonly, nonatomic) BOOL _showsInSystemActionGroup;
@property (readonly, nonatomic) BOOL _allowsAutoCancelOnDismiss;
@property (readonly, copy, nonatomic) NSUUID *activityUUID;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) UIImage *activityImage;
@property (readonly, nonatomic) UIViewController *activityViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionImageForActionRepresentationImage:(id)a0 contentSizeCategory:(id)a1;
+ (id)_actionImageForActionRepresentationImage:(id)a0 contentSizeCategory:(id)a1 monochrome:(BOOL)a2;
+ (id)_actionImageForBundleImageConfiguration:(id)a0;
+ (id)_activityExtensionItemsForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;
+ (id)_activityImageForActionRepresentationImage:(id)a0;
+ (id)_activityImageForApplicationBundleIdentifier:(id)a0;
+ (id)_activityImageForBundleImageConfiguration:(id)a0;
+ (id)_activitySettingsImageForApplicationBundleIdentifier:(id)a0;
+ (id)_activitySettingsImageForBundleImageConfiguration:(id)a0;
+ (id)_defaultFallbackActivityType;
+ (id)_imageByApplyingDefaultEffectsToImage:(id)a0 activityCategory:(long long)a1 iconFormat:(int)a2;
+ (BOOL)_isCapabilityBasedActivity;
+ (void)_loadItemProvidersFromActivityItems:(id)a0 withCacheURL:(id)a1 completion:(id /* block */)a2;
+ (void)_performAfterActivityImageLoadingCompletes:(id /* block */)a0;
+ (id)_stringFromActivityCategory:(long long)a0;
+ (unsigned long long)_xpcAttributes;
+ (unsigned long long)_xpcAttributes;
+ (Class)classForPreparingExtensionItemData;
+ (double)imageWidthForContentSizeCategory:(id)a0;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;

- (void)_cleanup;
- (id)init;
- (id)applicationProxy;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)_activityImage;
- (id)_systemImageName;
- (void)performActivity;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (void)prepareWithActivityItems:(id)a0;
- (id)_actionBundleImageConfiguration;
- (id)_attachmentNameForActivityItem:(id)a0;
- (id)_beforeActivity;
- (id)_embeddedActivityViewController;
- (id)_thumbnailImageForActivityItem:(id)a0;
- (id)_activityBundleImageConfiguration;
- (id)_activitySettingsBundleImageConfiguration;
- (id)_activitySettingsImage;
- (BOOL)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (BOOL)_appIsDocumentTypeOwner;
- (id)_bundleIdentifierForActivityImageCreation;
- (BOOL)_canBeExcludeWhenMatchingWithContext:(id)a0;
- (id)_dataTypeIdentifierForActivityItem:(id)a0;
- (long long)_defaultSortGroup;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_injectedJavaScriptResult:(id)a0;
- (BOOL)_isExecutedInProcess;
- (void)_loadItemProvidersFromActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)_loadItemProvidersFromActivityItems:(id)a0 wantsSendCopyRepresentation:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_managesOwnPresentation;
- (BOOL)_needsResolvedActivityItems;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)a0;
- (id)_subjectForActivityItem:(id)a0;
- (BOOL)_supportsOpenInPlace;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsInitialSocialText;
- (BOOL)_wantsOriginalImageColor;
- (BOOL)_wantsThumbnailItemData;
- (void)_willBePerformedOrPresented;
- (void)_willPresentAsFormSheet;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (void)prepareWithActivityExtensionItemData:(id)a0;
- (id)ss_activitySpecificExtensionItemDataRequestInfo;
- (id)ss_activityTypeToReportToHost;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
- (BOOL)ss_shouldExecuteInShareSheet;

@end
