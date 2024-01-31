@class NSString, NSMutableArray, FBSDisplayMonitor;

@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving> {
    NSMutableArray *_listeners;
    FBSDisplayMonitor *_displayMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)addListener:(id /* block */)a0;
- (void)removeListener:(id)a0;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)_onMainQueue_notifyListeners;

@end
