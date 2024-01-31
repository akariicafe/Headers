@class HMHome, NSMutableSet, HMRoom;

@interface HFCameraItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *cameraItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id /* block */)_favoriteFilter;
- (id /* block */)_roomFilter;
- (id /* block */)_showInHomeDashboardFilter;

@end
