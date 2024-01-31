@class MKPlaceCardActionItem;
@protocol MUPlaceCardActionsRowViewMenuProvider;

@interface MUPlaceActionRowItemViewModel : MUActionRowItemViewModel {
    unsigned long long _style;
}

@property (readonly, nonatomic) MKPlaceCardActionItem *actionRowItem;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewMenuProvider> menuProvider;

- (void)dealloc;
- (BOOL)isSelected;
- (id)titleText;
- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)preferredBackgroundColor;
- (id)analyticsButtonValue;
- (id)buildMenuWithPresentationOptions:(id)a0;
- (id)initWithActionRowItem:(id)a0 menuProvider:(id)a1 style:(unsigned long long)a2;
- (id)preferredTintColor;

@end
