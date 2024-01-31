@class NSOrderedSet, TSAGalleryItem;

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem;
@property (readonly, nonatomic) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)UUIDDescription;
- (id)initWithItems:(id)a0 displayedItem:(id)a1;

@end
