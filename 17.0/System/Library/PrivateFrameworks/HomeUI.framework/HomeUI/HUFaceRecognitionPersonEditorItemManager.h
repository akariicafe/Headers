@class HFUserNameFormatter, HFItem, HFStaticItemProvider, HFStaticItem, HMHome;
@protocol HFPersonLikeItem;

@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFItem *faceCropItem;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HFItem *addNameItem;
@property (retain, nonatomic) HFStaticItem *hideNotificationsItem;
@property (retain, nonatomic) HFItem *deleteItem;
@property (retain, nonatomic) HMHome *personHome;
@property (retain, nonatomic) HFUserNameFormatter *userNameFormatter;
@property (readonly, nonatomic) HFItem<HFPersonLikeItem> *personItem;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
