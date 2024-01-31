@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)entity;
- (unsigned int)_entitysReferenceID;
- (unsigned long long)hash;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_setEntity:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_createCachesAndOptimizeState;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (id)_underlyingProperty;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyDescription:(id)a0;

@end
