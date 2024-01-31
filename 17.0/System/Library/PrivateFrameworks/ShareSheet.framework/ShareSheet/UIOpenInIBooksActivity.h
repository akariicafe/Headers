@class NSString, NSURL, LSApplicationProxy, NSOperation, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL shouldUnlinkFile;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSOperation *operation;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (id)bestJobNameForActivityItems:(id)a0;
+ (id)defaultJobName;
+ (id)jobNameFormatForFile;

- (id)activityType;
- (id)init;
- (id)activityTitle;
- (void).cxx_destruct;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_appIsDocumentTypeOwner;
- (id)_bundleIdentifierForActivityImageCreation;
- (long long)_defaultSortGroup;
- (void)_finishedCopyingResource:(BOOL)a0;
- (void)_handleSaveToPDFWithCompleted:(BOOL)a0 error:(id)a1;
- (id)_loadedApplicationProxy;
- (void)_openDocumentWithApplication;

@end
