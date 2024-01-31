@class NSArray;

@interface SLProgressiveCheckerResult : NSObject

@property (readonly, nonatomic) unsigned long long resultType;
@property (readonly, nonatomic) unsigned long long analyzedSamples;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) NSArray *detailedResult;

- (void).cxx_destruct;
- (id)initWithScore:(float)a0 ofType:(unsigned long long)a1 analyzedSamples:(unsigned long long)a2 detailedResults:(id)a3;

@end
