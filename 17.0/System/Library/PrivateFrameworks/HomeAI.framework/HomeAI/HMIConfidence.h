@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *levelThresholds;
@property (readonly) long long level;
@property (readonly) double value;

- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(double)a0 levelThresholds:(id)a1;

@end
