@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSDate *startDate;

+ (id)motionActivityConfidenceToString:(unsigned long long)a0;
+ (id)motionActivityTypeToString:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 confidence:(unsigned long long)a1 startDate:(id)a2;

@end
