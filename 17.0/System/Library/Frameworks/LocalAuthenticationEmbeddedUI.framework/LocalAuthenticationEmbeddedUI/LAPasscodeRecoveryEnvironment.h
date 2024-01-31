@class NSString;

@interface LAPasscodeRecoveryEnvironment : NSObject <LAPasscodeRecoveryEnvironment>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_system;
- (id)controllerWithConfig:(id)a0;
- (id)preflightController;

@end
