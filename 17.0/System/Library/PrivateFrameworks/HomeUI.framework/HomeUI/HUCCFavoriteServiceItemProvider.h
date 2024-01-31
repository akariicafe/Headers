@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider>

@property (retain, nonatomic) NSMutableSet *serviceLikeItems;
@property (readonly, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
