@class NSString, NSData, NSDate;

@interface CWFLinkQualityMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) long long noise;
@property (readonly, nonatomic) double txRate;
@property (readonly, nonatomic) double rxRate;
@property (readonly, nonatomic) unsigned long long CCA;
@property (copy, nonatomic) NSData *linkQualityMetricData;

- (double)rxRate;
- (id)JSONCompatibleKeyValueMap;
- (unsigned long long)CCA;
- (void)encodeWithCoder:(id)a0;
- (long long)RSSI;
- (long long)noise;
- (double)txRate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;

@end
