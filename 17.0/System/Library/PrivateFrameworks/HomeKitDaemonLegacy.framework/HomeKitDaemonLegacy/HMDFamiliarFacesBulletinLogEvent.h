@class NSString, NSDictionary, NSUUID;

@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) BOOL containsFaceClassification;
@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) BOOL doorbellPressed;
@property (readonly) double secondsFromDoorbellToFaceClassification;
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
- (id)initWithContainsFaceClassification:(BOOL)a0 numberOfKnownPersons:(long long)a1 numberOfUnknownPersons:(long long)a2 bulletinReason:(id)a3 doorbellPressed:(BOOL)a4 secondsFromDoorbellToFaceClassification:(double)a5;

@end
