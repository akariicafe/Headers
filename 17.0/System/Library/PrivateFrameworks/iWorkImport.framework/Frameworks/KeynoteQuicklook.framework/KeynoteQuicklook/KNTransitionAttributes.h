@interface KNTransitionAttributes : KNAnimationAttributes

+ (BOOL)customAttributeKeyIsValid:(id)a0;
+ (id)defaultAttributesForEffect:(id)a0;
+ (id)p_readDeprecatedAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;
+ (void)p_readSharedAttributesForArchive:(void *)a0 intoDictionary:(id)a1;
+ (void)p_readTransitionAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;
+ (id)supportedCustomAttributes;

- (void)encodeToArchive:(void *)a0;
- (id)initFromTransitionAttributesArchive:(const void *)a0;
- (void)p_writeSharedAttributesToArchive:(void *)a0;
- (void)p_writeTransitionAttributesToArchive:(void *)a0;

@end
