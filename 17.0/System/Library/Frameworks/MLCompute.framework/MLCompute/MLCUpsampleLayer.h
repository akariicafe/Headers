@class NSArray;

@interface MLCUpsampleLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long upsampleWidth;
@property (readonly, nonatomic) unsigned long long upsampleHeight;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) int sampleMode;
@property (readonly, nonatomic) BOOL alignsCorners;

+ (id)layerWithShape:(id)a0;
+ (id)layerWithShape:(id)a0 sampleMode:(int)a1 alignsCorners:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithShape:(id)a0 sampleMode:(int)a1 alignCorners:(BOOL)a2;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)summarizedDOTDescription;

@end
