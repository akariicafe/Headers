@class HFStaticItem, NSObject;
@protocol OS_dispatch_queue;

@interface HUSiriHistoryItemManager : HFItemManager

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HFStaticItem *deleteSiriHistoryItem;

- (void).cxx_destruct;
- (id)didSelectItemAtIndexPath:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)didUpdateItemAtIndexPath:(id)a0;
- (id)initWithDelegate:(id)a0 accessorySettingItem:(id)a1;
- (id)initWithDelegate:(id)a0 groupItem:(id)a1;

@end
