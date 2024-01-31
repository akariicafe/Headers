@class NSDictionary;

@interface _MLCANEMatMulParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *matMulParams;
@property (readonly, retain, nonatomic) NSDictionary *transposeXParams;
@property (readonly, retain, nonatomic) NSDictionary *transposeYParams;
@property (readonly, retain, nonatomic) NSDictionary *finalTransposeParams;
@property (readonly, retain, nonatomic) NSDictionary *gocParams;

+ (id)matMulUnitParametersWith:(id)a0 transposeXParams:(id)a1 transposeYParams:(id)a2 finalTransposeParams:(id)a3 gocParams:(id)a4;

- (void).cxx_destruct;
- (id)initWithMatMulParams:(id)a0 transposeXParams:(id)a1 transposeYParams:(id)a2 finalTransposeParams:(id)a3 gocParams:(id)a4;

@end
