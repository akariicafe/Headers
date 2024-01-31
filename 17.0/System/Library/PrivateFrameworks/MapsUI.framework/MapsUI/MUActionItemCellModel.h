@class NSString, MKPlaceCardActionItem, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MUActionItemCellModel : NSObject <MUDynamicButtonCellModel> {
    MKPlaceCardActionItem *_actionItem;
}

@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *symbolName;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long actionStyle;
@property (weak, nonatomic) id<MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property (copy, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_registerObserver;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_resolvedActionItem;
- (id)accessibilityIdentifierForAction;
- (id)initWithActionItem:(id)a0;

@end
