@class NSTimer, NSString, NSDate;

@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving>

@property (retain, nonatomic) NSDate *nextEligibleMaintenanceDate;
@property (retain, nonatomic) NSTimer *dynamicLearningCacheTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLanguageModelMaintainer;

- (id)init;
- (void)dealloc;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (void)dynamicLearningCacheTimerFired:(id)a0;
- (BOOL)isMaintenanceDue;
- (void)performMaintenanceIfNecessary;
- (void)touchDynamicLearningCacheTimer;

@end
