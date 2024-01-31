@class TASingleVisitDetectionMetrics, TAVisitDetectionMetrics, TASPAdvertisement, NSString, TAGeneralDetectionMetrics;

@interface TAMetricsDetection : NSObject <TAMetricsProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long detectionType;
@property (readonly, nonatomic) TAGeneralDetectionMetrics *generalDetectionMetrics;
@property (readonly, nonatomic) TAVisitDetectionMetrics *visitDetectionMetrics;
@property (readonly, nonatomic) TASingleVisitDetectionMetrics *singleVisitDetectionMetrics;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertTADetectionTypeToString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithDetectionType:(unsigned long long)a0 visitDetectionMetrics:(id)a1 generalDetectionMetrics:(id)a2 singleVisitDetectionMetrics:(id)a3 latestAdvertisement:(id)a4;

@end
