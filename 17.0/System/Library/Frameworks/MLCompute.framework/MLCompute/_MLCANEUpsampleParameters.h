@class NSDictionary;

@interface _MLCANEUpsampleParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *upsampleParams;
@property (readonly, nonatomic) float scaleFactorX;
@property (readonly, nonatomic) float scaleFactorY;

+ (id)upsampleUnitParametersWith:(id)a0 scaleFactorX:(float)a1 scaleFactorY:(float)a2;

- (void).cxx_destruct;
- (id)initWithUpsampleParams:(id)a0 scaleFactorX:(float)a1 scaleFactorY:(float)a2;

@end
