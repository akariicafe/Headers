@interface TRIFBFactorLevelChanges : NSObject {
    unsigned char _changeTypeName;
    unsigned int _replacementName;
    unsigned char _replacementLevelType;
    unsigned char _changeTypeLevel;
    unsigned int _replacementLevel;
    unsigned char _changeTypeMetadata;
    unsigned int _replacementMetadata;
    unsigned char _changeTypeCacheKey;
    unsigned int _replacementCacheKey;
    unsigned char _changeTypeAlias;
    unsigned int _replacementAlias;
    unsigned char _changeTypeFactorNamespaceName;
    unsigned int _replacementFactorNamespaceName;
    unsigned char _changeTypeFactorId;
    unsigned int _replacementFactorId;
    unsigned char _changeTypeNamespaceId;
    unsigned int _replacementNamespaceId;
}

- (void)omitNamespaceId;
- (void)omitAlias;
- (void)omitCacheKey;
- (void)omitFactorId;
- (void)omitFactorNamespaceName;
- (void)preserveAlias;
- (void)preserveCacheKey;
- (void)preserveFactorId;
- (void)preserveFactorNamespaceName;
- (void)preserveLevel;
- (void)preserveMetadata;
- (void)preserveName;
- (void)preserveNamespaceId;
- (void)replaceAlias:(id)a0;
- (void)replaceCacheKey:(unsigned int)a0;
- (void)replaceFactorId:(id)a0;
- (void)replaceFactorNamespaceName:(id)a0;
- (void)replaceLevelWithBoolVal:(id)a0;
- (void)replaceLevelWithDoubleVal:(id)a0;
- (void)replaceLevelWithInt64Val:(id)a0;
- (void)replaceLevelWithMaRefVal:(id)a0;
- (void)replaceLevelWithStringVal:(id)a0;
- (void)replaceLevelWithTrialAssetVal:(id)a0;
- (void)replaceMetadata:(id)a0;
- (void)replaceName:(id)a0;
- (void)replaceNamespaceId:(unsigned int)a0;

@end
