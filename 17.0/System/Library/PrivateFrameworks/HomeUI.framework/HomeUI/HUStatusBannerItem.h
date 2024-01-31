@interface HUStatusBannerItem : HFTransformItem

+ (id)_networkNameForHomeKitObjects:(id)a0;
+ (id)_sortedRoomNamesForHomeKitObjects:(id)a0;

- (id)_descriptionForLocalizedStringKey:(id)a0 representedHomeKitObjects:(id)a1;
- (id)_descriptionForLocalizedStringKey:(id)a0 representedHomeKitObjects:(id)a1 options:(unsigned long long)a2;
- (id)_sortedObjectDisplayNamesForHomeKitObjects:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSourceItem:(id)a0;

@end
