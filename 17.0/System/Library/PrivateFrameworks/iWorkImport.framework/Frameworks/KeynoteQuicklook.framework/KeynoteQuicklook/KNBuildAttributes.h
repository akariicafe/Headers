@interface KNBuildAttributes : KNAnimationAttributes

+ (id)attributeValueForProperty:(id)a0 value:(id)a1;
+ (BOOL)customAttributeKeyIsValid:(id)a0;
+ (id)defaultAttributesForEffect:(id)a0 buildType:(long long)a1;
+ (id)supportedCustomAttributes;

- (id)initFromBuildAttributesArchive:(const void *)a0;
- (id)attributeValueForProperty:(id)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (void)p_readBuildAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;
- (void)p_readSharedAttributesForArchive:(void *)a0 intoDictionary:(id)a1;
- (void)p_readTEFAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;
- (void)p_setUnsafeDirection:(unsigned long long)a0 onAttributes:(id)a1;
- (BOOL)p_usesAlignToPath;
- (void)p_writeAttributesForTypewriterToDiffArchive:(void *)a0 archiver:(id)a1;
- (void)p_writeBuildAttributesToArchive:(void *)a0 archiver:(id)a1;
- (void)p_writeSharedAttributesToArchive:(void *)a0;

@end
