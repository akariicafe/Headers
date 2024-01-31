@class NSSet, HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HFActionSetSuggestionItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *staticSuggestionItems;
@property (retain, nonatomic) NSSet *customSuggestionItems;
@property (nonatomic) BOOL hasProvidedStaticSuggestionItems;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) BOOL includeExistingActionSets;
@property (nonatomic) BOOL includeCustomActionSets;
@property (nonatomic) BOOL persistAddedSuggestions;

- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)_builtInActionSetOfType:(id)a0;

@end
