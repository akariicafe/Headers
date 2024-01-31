@class NPTResults, NSString, NPTUpload, NPTMetadataCollector, NSMutableDictionary, NSDictionary, NPTPerformanceTestConfiguration, NSObject, NPTPing, NPTDownload;
@protocol OS_nw_activity;

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying> {
    NPTDownload *download;
    NPTUpload *upload;
    NPTPing *ping;
    NSMutableDictionary *restoredMetadata;
    NSString *uuid;
    NSObject<OS_nw_activity> *performanceTestActivity;
    NSMutableDictionary *snapshots;
    NPTMetadataCollector *collector;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTResults *results;
@property (nonatomic) BOOL inTimedMode;
@property (copy, nonatomic) id /* block */ _metadataDidChangeHandler;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTPerformanceTestConfiguration *configuration;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) id /* block */ metadataDidChangeHandler;
@property (retain, nonatomic) NSDictionary *_additionalMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performanceTestWithDefaultConfiguration;
+ (id)performanceTestWithConfiguration:(id)a0;

- (id)init;
- (void)download:(id)a0 didFinishWithResults:(id)a1;
- (void)dealloc;
- (void)fetchAndSaveWRMMetrics;
- (id)getDataForCoreAnalytics;
- (void)download:(id)a0 didFinishWithError:(id)a1;
- (void)pingDidFinishWithResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)timestampMasked;
- (id)getFlattenedMetadataDictionary:(id)a0;
- (void)download:(id)a0 didReceiveSpeedMetric:(id)a1;
- (void)pingDidFinishWithError:(id)a0;
- (void)upload:(id)a0 didFinishWithError:(id)a1;
- (void)saveToAWD;
- (void)upload:(id)a0 didReceiveSpeedMetric:(id)a1;
- (id)fetchAWDMetric;
- (id)timestampMaskedString;
- (void)startMetadataCollectionWithCompletion:(id /* block */)a0;
- (void)completeActivityWithReason:(int)a0;
- (id)getFlattenedDictionary;
- (id)collectorsWithoutCDNDebug;
- (void)activateActivity;
- (id)initWithConfiguration:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (void)cancelAllNetworking;
- (void)startTestWithCompletion:(id /* block */)a0;
- (void)downloadWillStart;
- (void)upload:(id)a0 didFinishWithResults:(id)a1;
- (void)pingWillStartPinging;
- (void)startPingWithCompletion:(id /* block */)a0;
- (void)logFrameworkUsage:(int)a0;
- (id)getTransformedDataForCoreAnalytics;
- (id)convertDateToISO8601String:(id)a0;
- (void)uploadWillStart;
- (id)NQRatingFromEnum:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)startUploadWithCompletion:(id /* block */)a0;
- (void)stopMetadataCollection;

@end
