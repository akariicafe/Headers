@class NSSet, NSArray;

@interface HUMediaSourceListItemManager : HFItemManager

@property (retain, nonatomic) NSSet *containers;
@property (retain, nonatomic) NSArray *sources;
@property (readonly, nonatomic) NSArray *mediaSourceItems;
@property (readonly) unsigned long long target;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initForMediaProfileContainers:(id)a0 delegate:(id)a1 forTarget:(unsigned long long)a2;

@end
