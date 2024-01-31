@class NSArray;

@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *basicProperties;
@property (readonly, copy, nonatomic) NSArray *allBasicProperties;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) long long count;

+ (id)propertyCollectionByMergingCollection:(id)a0 otherCollection:(id)a1;
+ (id)propertyCollectionByMergingCollection:(id)a0 otherCollection:(id)a1 options:(unsigned long long)a2;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_basicPropertiesIncludeDeleted:(BOOL)a0;
- (id)_propertiesByType;
- (id)_propertiesWithType:(long long)a0 includeDeleted:(BOOL)a1;
- (id)allPropertiesWithType:(long long)a0;
- (id)collectionByAddingProperties:(id)a0;
- (id)firstBasicPropertyWithType:(long long)a0;
- (id)firstPropertyWithType:(long long)a0;
- (id)propertiesWithType:(long long)a0;
- (id)propertyCollectionByMerging:(id)a0 options:(unsigned long long)a1;

@end
