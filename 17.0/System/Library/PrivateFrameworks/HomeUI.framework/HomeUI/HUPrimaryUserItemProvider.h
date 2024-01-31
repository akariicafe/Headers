@class HMHome, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HUPrimaryUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0 mediaProfileContainer:(id)a1;
- (id)invalidationReasons;

@end
