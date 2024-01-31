@class NSString;

@interface _UIDisplayObserver : NSObject <FBSDisplayObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;

@end
