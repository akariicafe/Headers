@class NSDictionary;

@interface APCSAgeSensitiveNoise : APConfiguration

@property (readonly, nonatomic) NSDictionary *lowerAgeLimits;
@property (readonly, nonatomic) NSDictionary *upperAgeLimits;

+ (id)path;

@end
