@class NSNumber;

@interface INStartCallIntentDonationMetadata : INIntentDonationMetadata

@property (nonatomic) double callDuration;
@property (nonatomic) double timeToEstablish;
@property (copy, nonatomic) NSNumber *recentCallStatus;
@property (copy, nonatomic) NSNumber *disconnectedReason;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)init;
- (unsigned long long)hash;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
