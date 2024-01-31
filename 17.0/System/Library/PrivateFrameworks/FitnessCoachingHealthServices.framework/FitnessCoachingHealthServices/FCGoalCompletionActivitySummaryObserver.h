@class NSString, HDProfile, HKActivitySummary, NSObject;
@protocol FCDailyActivityGoalDetectionDelegate, OS_dispatch_queue;

@interface FCGoalCompletionActivitySummaryObserver : NSObject <HDCurrentActivitySummaryHelperObserver, HDProfileReadyObserver> {
    HKActivitySummary *_currentActivitySummary;
    HKActivitySummary *_previousActivitySummary;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (weak, nonatomic) id<FCDailyActivityGoalDetectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)dealloc;
- (void)_runGoalCompletionsForNewActivitySummary:(id)a0 forChangedFields:(unsigned long long)a1;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (id)initWithProfile:(id)a0 serviceQueue:(id)a1;
- (BOOL)_runGoalCompletionForStandWithNewActivitySummary:(id)a0;
- (BOOL)_runGoalCompletionForExerciseWithNewActivitySummary:(id)a0;
- (BOOL)_runGoalCompletionForMoveWithNewActivitySummary:(id)a0;
- (void).cxx_destruct;

@end
