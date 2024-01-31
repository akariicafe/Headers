@class NSString, HDSPSleepScheduleModelChangeEvaluation;
@protocol HDSPSource;

@interface HDSPEnvironmentContext : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) id<HDSPSource> source;
@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithSource:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)initWithSource:(id)a0 changeEvaluation:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)contextByApplyingChangeEvaluation:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
