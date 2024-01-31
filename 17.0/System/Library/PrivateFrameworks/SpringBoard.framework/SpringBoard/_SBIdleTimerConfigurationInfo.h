@class SBIdleTimerRequestConfiguration, NSString;

@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBIdleTimerRequestConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithConfiguration:(id)a0 reason:(id)a1;

@end
