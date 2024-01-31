@class NSString, NSDictionary, NSUUID, HMDAccessoryMetricVendorDetails, HMFSoftwareVersion;

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) HMDAccessoryMetricVendorDetails *metricVendorDetails;
@property (readonly, nonatomic) HMFSoftwareVersion *stagedVersion;
@property (readonly, nonatomic) unsigned long long advertisedDuration;
@property (readonly, nonatomic) unsigned long long totalAllowedDuration;
@property (readonly, nonatomic) long long status;
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
- (id)initWithDetails:(id)a0 stagedVersion:(id)a1 advertisedDuration:(unsigned long long)a2 totalAllowedDuration:(unsigned long long)a3 status:(long long)a4;

@end
