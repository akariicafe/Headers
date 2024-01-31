@class NSSet, HMHome;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *suggestionItems;
@property (nonatomic) unsigned long long suggestedRoomLimit;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HFRoomSuggestionVendor> suggestionVendor;
@property (copy, nonatomic) NSSet *supplementaryRoomBuilders;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)_filteredSuggestions;
- (id)invalidationReasons;
- (id)_filteredSupplementaryRoomBuilders;
- (id)_keyForRoomName:(id)a0;
- (id)initWithHome:(id)a0 suggestionVendor:(id)a1;

@end
