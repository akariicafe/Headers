@interface ADConfidenceLevelRanges : NSObject

@property (nonatomic) struct ADFloatRange { float start; float end; } lowLevel;
@property (nonatomic) struct ADFloatRange { float start; float end; } mediumLevel;
@property (nonatomic) struct ADFloatRange { float start; float end; } highLevel;
@property (readonly, nonatomic) unsigned long long confidenceUnits;

+ (id)rangesForUnits:(unsigned long long)a0 lowLevel:(struct ADFloatRange { float x0; float x1; })a1 mediumLevel:(struct ADFloatRange { float x0; float x1; })a2 highLevel:(struct ADFloatRange { float x0; float x1; })a3;

- (id)rangesForUnits:(unsigned long long)a0;
- (id)createConvertedRangesWithUnits:(unsigned long long)a0 operation:(void /* function */ *)a1;
- (id)initForUnits:(unsigned long long)a0 lowLevel:(struct ADFloatRange { float x0; float x1; })a1 mediumLevel:(struct ADFloatRange { float x0; float x1; })a2 highLevel:(struct ADFloatRange { float x0; float x1; })a3;

@end
