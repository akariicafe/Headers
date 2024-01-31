@class FBSDisplayIdentity, NSString, FBSDisplayConfiguration, NSObject, FBSDisplayMonitor;
@protocol OS_dispatch_queue;

@interface SBChamoisDisplayPrototypeController : NSObject <FBSDisplayObserving> {
    FBSDisplayIdentity *_activeDisplayIdentity;
    FBSDisplayConfiguration *_activeDisplayConfiguration;
    FBSDisplayMonitor *_displayMonitor;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateState;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (id)_caEnvironmentVariablesForDisplayConfiguration:(id)a0;
- (id)_xpcQueue_currentCAEnvironmentVariables;
- (id)_xpcQueue_environmentValueForKey:(id)a0;
- (void)_xpcQueue_setValuesForEnvironmentVariables:(id)a0;
- (id)initWithDisplayMonitor:(id)a0;

@end
