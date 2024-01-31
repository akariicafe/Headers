@class AMUISwitcherViewController, UIViewController, UIView;
@protocol AMUISwitcherItem;

@interface _AMUISwitcherVisibleItemRecord : NSObject {
    long long _nominalAppearState;
    BOOL _unsettled;
    double _presentationProgress;
    long long _appearState;
    AMUISwitcherViewController *_switcher;
    id<AMUISwitcherItem> _item;
    UIView *_itemView;
    UIViewController *_viewController;
    long long _itemIndex;
}

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 index:(long long)a1 forSwitcher:(id)a2;
- (long long)_computeEffectiveAppearState;
- (void)_updateAppearState;

@end
