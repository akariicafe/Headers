@class HDPeriodicActivity, NSString, HDProfile, HDAssertion, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate> {
    NSString *_waitingToRunKey;
    NSString *_lastSubmissionAttemptKey;
    NSString *_intervalCounterKey;
    NSString *_lastProcessedDateKey;
    long long _repeatInterval;
    long long _graceInterval;
    BOOL _requiresClassB;
    long long _intervalMultiple;
    long long _maximumAttemptCount;
    double _minimumDelayBetweenAttempts;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    id /* block */ _block;
    HDPeriodicActivity *_periodicActivity;
    long long _waitingToRun;
    NSDate *_lastSubmissionAttemptDate;
    long long _intervalCounter;
    NSDate *_lastProcessedDate;
    NSString *_taskName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
