@class TAAccessoryInformation, NSArray, NSDictionary, NSData, NSDate, TASPAdvertisement, TAMetricsDetection;

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSDictionary *detectionSummary;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, copy, nonatomic) NSArray *locationHistory;
@property (readonly, nonatomic) TAMetricsDetection *detectionMetrics;
@property (readonly, nonatomic) unsigned long long detectionType;
@property (readonly, nonatomic) unsigned long long immediacyType;
@property (copy, nonatomic) TAAccessoryInformation *accessoryInfo;
@property (readonly, nonatomic) unsigned long long forceSurfaceReason;

+ (id)convertTAForceSurfaceReasonToString:(unsigned long long)a0;
+ (id)convertTANotificationImmediacyTypeToString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatestAdv:(id)a0 detectionSummary:(id)a1 date:(id)a2 locHistory:(id)a3 detectionMetrics:(id)a4 detectionType:(unsigned long long)a5 immediacyType:(unsigned long long)a6 accessoryInfo:(id)a7 forceSurfaceReason:(unsigned long long)a8;
- (void)updateForceReasonWith:(unsigned long long)a0;

@end
