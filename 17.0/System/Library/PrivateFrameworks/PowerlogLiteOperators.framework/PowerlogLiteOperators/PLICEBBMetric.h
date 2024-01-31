@class PLTimer, NSString, NSData, NSMutableDictionary, NSDictionary, NSObject, PLAgent, NSNumber, PLICEBBHardwareMessage;
@protocol OS_dispatch_queue;

@interface PLICEBBMetric : NSObject

@property (retain) NSDictionary *plistSimMetrics;
@property (retain) NSMutableDictionary *sendSimMetrics;
@property (retain) NSMutableDictionary *lteSimMetrics;
@property (retain) NSMutableDictionary *umtsSimMetrics;
@property (retain) NSMutableDictionary *egprsSimMetrics;
@property (retain) NSMutableDictionary *tdsSimMetrics;
@property (retain) NSNumber *error;
@property (retain) PLTimer *tickTock;
@property (retain) NSString *notifyTitle;
@property (retain) NSNumber *aPeriodicTriggerCnt;
@property (retain) NSNumber *aPeriodicProfileId;
@property (retain) NSData *aPeriodicTriggerPayload;
@property (retain) NSMutableDictionary *prodMetrics;
@property (retain) PLICEBBHardwareMessage *storeMetricsLogger;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) PLAgent *logAgent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deregisterForNotifications:(id)a0;
- (void)initializeDataStoreBBTS:(id)a0 triggerCnt:(id)a1 triggerId:(id)a2;
- (void)initializeMetricsDictWithTS:(id)a0 triggerCnt:(id)a1 triggerId:(id)a2;
- (void)initializeMetricsSim;
- (void)modelProdMetricsNotify;
- (void)modelSimMetricsNotify:(id)a0;
- (void)queueAperiodicMetricId:(id)a0 payload:(id)a1 profileId:(id)a2;
- (void)queuePeriodicMetricId:(id)a0 payload:(id)a1 forTrigger:(id)a2;
- (BOOL)registerForNotifClient:(id)a0 andProfile:(id)a1;

@end
