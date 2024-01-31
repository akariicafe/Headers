@class NSUUID, HKSource, NSDate, HKSampleType;

@interface HKRecalibrateEstimatesRequestRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionIdentifier:(id)a0 source:(id)a1 sampleType:(id)a2 effectiveDate:(id)a3;

@end
