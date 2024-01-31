@class NSMutableDictionary, NSString, LSApplicationWorkspace, NSObject;
@protocol OS_dispatch_queue;

@interface MTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (class, readonly, nonatomic) MTApplicationWorkspaceObserver *sharedWorkspaceObserver;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) LSApplicationWorkspace *applicationWorkspace;
@property (retain, nonatomic) NSMutableDictionary *observersForBundleID;
@property (nonatomic, getter=isObserving) BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)isApplicationInstalledForBundleIdentifier:(id)a0;
- (BOOL)isApplicationInstalledForBundleIdentifier:(id)a0 allowPlaceholder:(BOOL)a1;
- (void).cxx_destruct;

@end
