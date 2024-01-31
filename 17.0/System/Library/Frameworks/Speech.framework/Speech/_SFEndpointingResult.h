@class NSArray;

@interface _SFEndpointingResult : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (readonly, nonatomic) long long wordCount;
@property (readonly, nonatomic) double eosLikelihood;
@property (readonly, copy, nonatomic) NSArray *pauseCounts;
@property (readonly, nonatomic) double silencePosterior;

- (void).cxx_destruct;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 wordCount:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4;

@end
