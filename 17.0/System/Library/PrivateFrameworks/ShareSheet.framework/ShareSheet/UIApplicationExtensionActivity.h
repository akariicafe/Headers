@class NSExtension, NSDate, NSURL, NSExtensionItem, UISUIActivityExtensionItemDataRequest, NSString, _UIActivityBundleHelper, UIViewController;

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget>

@property (retain, nonatomic) UIViewController *extensionViewController;
@property (retain, nonatomic) NSExtension *applicationExtension;
@property (copy, nonatomic) id extensionContextIdentifier;
@property (weak, nonatomic) UIViewController *presenterViewController;
@property (copy, nonatomic) id /* block */ presenterCompletion;
@property (retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper;
@property (retain, nonatomic) NSExtensionItem *_injectedExtensionItem;
@property (copy, nonatomic) id /* block */ extensionRequestCleanupCompletion;
@property (retain, nonatomic) NSURL *originalFileURL;
@property (readonly, nonatomic) NSDate *installationDate;
@property (retain, nonatomic) UISUIActivityExtensionItemDataRequest *extensionItemDataRequest;
@property (readonly, nonatomic) NSString *containingAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (id)_activityExtensionItemsForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;
+ (id)_applicationExtensionActivitiesForItems:(id)a0;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;

- (void)_cleanup;
- (id)activityType;
- (void)dealloc;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (void)prepareWithActivityItems:(id)a0;
- (id)_activitySettingsImage;
- (BOOL)_canBeExcludeWhenMatchingWithContext:(id)a0;
- (long long)_defaultSortGroup;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_injectedJavaScriptResult:(id)a0;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)a0;
- (BOOL)_isServiceExtension;
- (BOOL)_managesOwnPresentation;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentExtensionViewControllerIfPossible;
- (id)initWithApplicationExtension:(id)a0;
- (void)prepareWithActivityExtensionItemData:(id)a0;

@end
