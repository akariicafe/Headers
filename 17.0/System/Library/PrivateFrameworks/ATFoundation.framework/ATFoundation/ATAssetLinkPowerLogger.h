@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATAssetLinkPowerLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *aggregation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_scheduleFlushTimer;
- (void)logAssetLinkOfType:(long long)a0 didBeginDownloadingAsset:(id)a1;
- (void)logAssetLinkOfType:(long long)a0 didFinishAsset:(id)a1 withError:(id)a2;
- (id)_aggregatesForKey:(id)a0 createIfNotExistsWithTimestamp:(id)a1;
- (void)_flushMessagesToPowerlog;
- (void)_incrementCountForAggregates:(id)a0 key:(id)a1;

@end
