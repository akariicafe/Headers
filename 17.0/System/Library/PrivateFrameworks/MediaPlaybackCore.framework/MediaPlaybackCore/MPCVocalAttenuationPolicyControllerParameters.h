@class ICEnvironmentMonitor, NSProcessInfo;

@interface MPCVocalAttenuationPolicyControllerParameters : NSObject

@property (retain, nonatomic) ICEnvironmentMonitor *thermalMonitor;
@property (retain, nonatomic) NSProcessInfo *lowPowerModeMonitor;
@property (nonatomic) double renderingTimeLimit;

- (void).cxx_destruct;

@end
