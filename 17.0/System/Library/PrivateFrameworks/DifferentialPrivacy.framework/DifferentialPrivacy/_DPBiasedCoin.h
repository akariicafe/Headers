@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (id)init;
- (BOOL)flip;
- (id)initWithBias:(double)a0;
- (unsigned char)generateByte;
- (id)description;

@end
