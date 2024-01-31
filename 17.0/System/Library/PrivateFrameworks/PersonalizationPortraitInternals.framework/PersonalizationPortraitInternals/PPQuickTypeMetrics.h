@class PETScalarEventTracker, PETDistributionEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PETScalarEventTracker *_frameworkErrors;
    PETDistributionEventTracker *_contactsMatches;
    PETDistributionEventTracker *_foundInAppsMatches;
    PETDistributionEventTracker *_eventsMatches;
}

+ (void)contactMatchesWithContactsCount:(unsigned long long)a0 foundInAppsCount:(unsigned long long)a1;
+ (void)eventsMatches:(unsigned long long)a0;
+ (void)frameworkError:(id)a0 errorCode:(long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
