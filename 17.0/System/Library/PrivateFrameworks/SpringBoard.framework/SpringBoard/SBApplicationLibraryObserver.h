@class NSHashTable, NSString, NSArray, NSMutableDictionary, XBApplicationController, NSMutableSet, NSObject, FBSApplicationLibrary;
@protocol OS_dispatch_queue;

@interface SBApplicationLibraryObserver : NSObject <MCProfileConnectionObserver> {
    XBApplicationController *_splashBoardController;
    FBSApplicationLibrary *_appLibrary;
    NSMutableSet *_suspendCalloutsAssertionReasons;
    NSObject<OS_dispatch_queue> *_mainQueueProxy;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}

@property (readonly, copy, nonatomic) NSArray *placeholders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)_didAddPlaceholders:(id)a0;
- (id)init;
- (void)_didChangeNetworkUsage:(BOOL)a0;
- (void)_addObserver:(id)a0 table:(id)a1;
- (void)_didRemoveApplications:(id)a0;
- (void)_didDemoteApplications:(id)a0;
- (void)removeApplicationLifecycleObserver:(id)a0;
- (void)_removeObserver:(id)a0 table:(id)a1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_didAddApplications:(id)a0;
- (void)addApplicationLifecycleObserver:(id)a0;
- (void)_didUpdateApplications:(id)a0;
- (void)_didReplaceApplications:(id)a0;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (id)_appBundleIDsForApplications:(id)a0;
- (void).cxx_destruct;
- (id)suspendCalloutsAssertionWithReason:(id)a0;
- (id)initWithAppLibrary:(id)a0 splashBoardController:(id)a1;
- (void)_didCancelPlaceholders:(id)a0;
- (void)_waitForLaunchImageGenerationForApplications:(id)a0;
- (void)addPlaceholderLifecycleObserver:(id)a0;
- (void)removePlaceholderLifecycleObserver:(id)a0;

@end
