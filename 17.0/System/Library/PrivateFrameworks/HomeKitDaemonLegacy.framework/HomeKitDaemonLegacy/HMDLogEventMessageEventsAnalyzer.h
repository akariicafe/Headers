@class HMDEventCountersManager, HMDEventCounterGroup, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner, HMDAggregationAnalysisEventContributing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property double lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime;
@property (readonly) unsigned long long periodicLoggingInterval;
@property (readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup;
@property BOOL isPrimaryResident;
@property (copy) id /* block */ dateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)a0;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)runDailyTask;
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)a0;
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
- (void)submitPeriodicRemoteMessageCountersNow:(double)a0;
- (void)submitPeriodicXPCMessageCountersLogEventsIfNeeded;
- (void)submitPeriodicXPCMessageCountersLogEventsNow:(double)a0;
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)a0;

@end
