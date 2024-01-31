@class AFBBufferBuilder;

@interface TRIFBFactorLevelBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct FactorLevelBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)setMetadata:(id)a0;
- (void)setCacheKey:(unsigned int)a0;
- (void)setAlias:(id)a0;
- (void).cxx_destruct;
- (void)setNamespaceId:(unsigned int)a0;
- (void)setFactorId:(id)a0;
- (void)setFactorNamespaceName:(id)a0;
- (void)setLevelWithBoolVal:(id)a0;
- (void)setLevelWithDoubleVal:(id)a0;
- (void)setLevelWithInt64Val:(id)a0;
- (void)setLevelWithMaRefVal:(id)a0;
- (void)setLevelWithStringVal:(id)a0;
- (void)setLevelWithTrialAssetVal:(id)a0;

@end
