@class NSString;

@interface MLRangeBrick : NSObject <EspressoBrick>

@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) float start;
@property (readonly, nonatomic) float stepSize;
@property (readonly, nonatomic) float startValueParameter;
@property (readonly, nonatomic) float endValueParameter;
@property (readonly, nonatomic) float stepSizeValueParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (id)computeDynamicOutputShape:(id)a0;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (BOOL)hasDynamicOutputShape:(unsigned long long)a0;
- (BOOL)hasGPUSupport;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;

@end
