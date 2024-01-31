@class NSArray, NSString, NSData, MDLAnimatedScalarArray;

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent>

@property (retain, nonatomic) MDLAnimatedScalarArray *weights;
@property (retain, nonatomic) NSData *targetWeights;
@property (retain, nonatomic) NSData *targetCounts;
@property (readonly, nonatomic) NSArray *targetShapes;
@property (readonly, nonatomic) NSArray *shapeSetTargetWeights;
@property (readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)copyShapeSetTargetCountsInto:(unsigned int *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)copyShapeSetTargetWeightsInto:(float *)a0 maxCount:(unsigned long long)a1;
- (id)initWithOther:(id)a0;
- (id)initWithTargetShapes:(id)a0 shapeSetTargetWeights:(const float *)a1 count:(unsigned long long)a2 shapeSetTargetCounts:(const unsigned int *)a3 count:(unsigned long long)a4;
- (id)initWithTargetShapes:(id)a0 shapeSetTargetWeights:(id)a1 shapeSetTargetCounts:(id)a2;

@end
