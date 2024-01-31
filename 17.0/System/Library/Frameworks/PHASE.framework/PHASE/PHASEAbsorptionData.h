@class NSArray;

@interface PHASEAbsorptionData : NSObject

@property (readonly, nonatomic) NSArray *absorptionCoefficients;

+ (id)new;
+ (id)objectForDefault;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAbsorptionCoefficients:(id)a0;
- (id)initWithAbsorptionCoefficients:(id)a0 frequencyBands:(id)a1;

@end
