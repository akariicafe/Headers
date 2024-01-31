@class HMHome, HFRoomBuilderItem, HFItemBuilder;
@protocol HFServiceLikeBuilder;

@interface HFSelectedRoomItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;
@property (retain, nonatomic) HFRoomBuilderItem *roomBuilderItem;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0 serviceLikeBuilder:(id)a1;
- (id)invalidationReasons;

@end
