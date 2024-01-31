@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    NSDictionary *_propertyValues;
}

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (copy, nonatomic) id /* block */ fallbackArtworkCatalogBlock;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)persistentID;
- (id)initWithModelObject:(id)a0;
- (id)initWithPersistentID:(unsigned long long)a0;

@end
