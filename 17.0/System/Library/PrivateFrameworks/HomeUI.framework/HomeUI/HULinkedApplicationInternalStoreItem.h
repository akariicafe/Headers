@class NSString;

@interface HULinkedApplicationInternalStoreItem : HULinkedApplicationItem <NSCopying> {
    NSString *_bundleIdentifier;
}

- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 associatedAccessories:(id)a1;

@end
