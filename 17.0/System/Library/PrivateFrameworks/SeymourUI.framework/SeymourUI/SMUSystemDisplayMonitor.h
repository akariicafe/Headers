@class FBSDisplayMonitor, NSString, NSSet;
@protocol SMUSystemDisplayIdentity;

@interface SMUSystemDisplayMonitor : NSObject <FBSDisplayObserving, SMUSystemDisplayMonitoring>

@property (readonly, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SMUSystemDisplayIdentity> mainIdentity;
@property (readonly, nonatomic) NSSet *connectedIdentities;
@property (copy, nonatomic) id /* block */ onDisplayConnected;
@property (copy, nonatomic) id /* block */ onDisplayDisconnected;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;

@end
