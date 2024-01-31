@class NSSet, HMHome;

@interface HULinkedApplicationItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *linkedApplicationItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

+ (BOOL)prefersNonBlockingReloads;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)_generateItemsFromSoftwareLookupResult:(id)a0;
- (id)invalidationReasons;

@end
