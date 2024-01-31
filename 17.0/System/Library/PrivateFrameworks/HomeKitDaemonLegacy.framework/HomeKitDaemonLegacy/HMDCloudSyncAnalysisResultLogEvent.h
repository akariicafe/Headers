@class NSString, NSDictionary, NSUUID, NSDate;

@interface HMDCloudSyncAnalysisResultLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (retain, nonatomic) NSDate *creationDate;
@property unsigned long long dataSyncState;
@property BOOL uploadMaximumDelayReached;
@property BOOL lastDecryptionFailed;
@property unsigned long long incomingPushCount;
@property unsigned long long fetchCount;
@property unsigned long long legacyFetchCount;
@property unsigned long long fetchErrorCount;
@property unsigned long long legacyFetchErrorCount;
@property unsigned long long uploadCount;
@property unsigned long long legacyUploadCount;
@property unsigned long long uploadErrorCount;
@property unsigned long long legacyUploadErrorCount;
@property unsigned long long decryptionFailedCount;
@property unsigned long long bytesFetched;
@property unsigned long long bytesPushed;
@property unsigned long long legacyBytesFetched;
@property unsigned long long legacyBytesPushed;
@property (retain, nonatomic) NSDictionary *legacyUploadReasonCountMap;
@property (retain, nonatomic) NSDictionary *uploadErrorCountMap;
@property (retain, nonatomic) NSDictionary *legacyUploadErrorCountMap;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
