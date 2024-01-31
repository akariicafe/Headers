@class NSArray, HFPredictionsManager, NSMutableSet, HMHome;
@protocol HFCharacteristicValueSource;

@interface HFPredictedActionSetItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *allItems;
@property (nonatomic) unsigned long long itemCount;
@property (retain, nonatomic) HFPredictionsManager *predictionsManager;
@property (retain, nonatomic) NSArray *predictions;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *orderedItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0 predictionsManagerDelegate:(id)a1 itemCount:(unsigned long long)a2;
- (id)invalidationReasons;
- (id)fetchUserActionPredictions;

@end
