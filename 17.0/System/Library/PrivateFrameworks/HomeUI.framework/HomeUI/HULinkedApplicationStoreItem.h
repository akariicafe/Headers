@class AMSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying>

@property (readonly, nonatomic) AMSLookupItem *storeItem;

- (id)init;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_imageForSize:(struct CGSize { double x0; double x1; })a0 fromArtwork:(id)a1;
- (id)_loadStoreIconWithArtwork:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithStoreItem:(id)a0;
- (id)initWithStoreItem:(id)a0 associatedAccessories:(id)a1;

@end
