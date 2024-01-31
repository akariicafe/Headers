@class NSString, NSArray, NSURL, SBSApplicationShortcutService, NSNumber, SBSApplicationShortcutServiceFetchResult;

@interface SBFApplication : NSObject {
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    double _applicationShortcutServiceFetchResultExpirationReferenceTime;
}

@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic, getter=isSystemOrInternalApplication) BOOL systemOrInternalApplication;
@property (readonly, nonatomic) NSNumber *appStoreItemID;
@property (readonly, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier;
@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;

- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_updateApplicationShortcutServiceFetchResult;
- (void).cxx_destruct;

@end
