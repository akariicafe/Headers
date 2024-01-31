@interface CRTitleParameters : NSObject

@property (readonly) float minTitleProbability;
@property (readonly) unsigned long long minTitleLength;

+ (id)defaultTitleParameters;

- (id)initWithMinTitleProbability:(float)a0 minTitleLength:(unsigned long long)a1;

@end
