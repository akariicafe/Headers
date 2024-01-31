@class NSString, FBSProcessWatchdogPolicy, FBApplicationProcessWatchdogPolicy;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {
    FBSProcessWatchdogPolicy *_explicitPolicy;
    FBApplicationProcessWatchdogPolicy *_defaultProcessWatchdogProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSceneWatchdogProvider;
+ (id)disabledSceneWatchdogProvider;

@end
