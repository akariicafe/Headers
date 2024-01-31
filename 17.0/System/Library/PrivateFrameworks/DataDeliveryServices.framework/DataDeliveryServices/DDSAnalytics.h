@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DDSAnalytics : NSObject

@property (readonly, nonatomic) NSMutableDictionary *analyticByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticQueue;

+ (id)sharedInstance;
+ (BOOL)isInteger:(id)a0;
+ (id)roundNumber:(id)a0 toSignificantDigits:(id)a1;
+ (id)assetDownloadDurationBuckets;

- (id)init;
- (id)processName;
- (void).cxx_destruct;
- (id)bucketForValue:(id)a0 fromBuckets:(id)a1;
- (void)cancelRecordingForAsset:(id)a0;
- (void)dumpAssetLogWithAssertions:(id)a0 installedAssets:(id)a1;
- (void)recordAssetAction:(int)a0 forAsset:(id)a1;
- (void)recordUpdateCycleState:(int)a0;
- (void)reportAssetDownloadAnalytic:(id)a0;
- (void)reportUpdateCycleAnalytic:(id)a0;
- (id)stringForAction:(int)a0;

@end
