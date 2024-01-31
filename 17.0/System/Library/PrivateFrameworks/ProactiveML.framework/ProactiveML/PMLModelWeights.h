@class NSString, PMLMutableDenseVector;

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol> {
    PMLMutableDenseVector *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int length;

+ (id)modelWeightsFromFloats:(id)a0;
+ (id)zeroWeightsOfLength:(int)a0;
+ (id)constWeightsOfLength:(int)a0 value:(float)a1;
+ (id)modelWeightsOfLength:(int)a0;
+ (id)modelWeightsOfLength:(int)a0 rng:(id)a1;
+ (id)modelWeightsOfLength:(int)a0 rngSeed:(unsigned long long)a1;
+ (id)weightsFromNumbers:(id)a0;

- (id)initFromDictionary:(id)a0;
- (id)copy;
- (id)initWithCount:(int)a0;
- (void).cxx_destruct;
- (float *)values;
- (id)toDictionary;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)asMutableDenseVector;
- (id)initModelWeightsFromFloats:(id)a0;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)a0;
- (void)processValuesInPlaceWithBlock:(id /* block */)a0;
- (id)sliceFrom:(int)a0 to:(int)a1;
- (id)weightsByAppendingWeights:(id)a0;

@end
