@class NSString;

@interface CADisplayPixelConstraints : NSObject <CAPixelConstraints> {
    float *_nits;
    float *_apl;
    unsigned long long _n;
    float _weights[3];
}

@property (readonly, nonatomic) const float *nitsTable;
@property (readonly, nonatomic) const float *averagePixelTable;
@property (readonly, nonatomic) unsigned long long tableSize;
@property (readonly, nonatomic) const float *rgbWeights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConstraints:(const struct AveragePixelConstraints { float *x0; float *x1; float x2[3]; unsigned long long x3; float x4; float x5; } *)a0;

@end
