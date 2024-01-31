@class NSString;

@interface _BlastDoorLPAppleNewsMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
