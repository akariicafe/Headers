@class NSSet;

@interface HFItemProviderReloadResults : NSObject <NSCopying>

@property (retain, nonatomic) NSSet *addedItems;
@property (retain, nonatomic) NSSet *removedItems;
@property (retain, nonatomic) NSSet *existingItems;
@property (readonly, nonatomic) NSSet *allItems;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resultsByMergingWithResults:(id)a0;
- (id)initWithAddedItems:(id)a0 removedItems:(id)a1 existingItems:(id)a2;

@end
