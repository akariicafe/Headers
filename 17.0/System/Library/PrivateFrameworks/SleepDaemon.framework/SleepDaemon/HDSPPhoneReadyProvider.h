@class NSString, HDSPSpringboardMonitor, HDSPEnvironment;
@protocol HDSPSystemReadyDelegate;

@interface HDSPPhoneReadyProvider : NSObject <HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) HDSPSpringboardMonitor *springboardMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (weak, nonatomic) id<HDSPSystemReadyDelegate> delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (void)springboardDidStart;

@end
