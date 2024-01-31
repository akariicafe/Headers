@class WFContextualAction, UISwitch, SearchUIBiomeStreamSubscriber;

@interface SearchUISwitchAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) UISwitch *view;
@property BOOL isAwaitingUpdate;
@property BOOL expectedUpdateState;
@property (retain) SearchUIBiomeStreamSubscriber *subscriber;
@property (retain) WFContextualAction *action;
@property (nonatomic) BOOL isHiddenByEvent;
@property (copy) id /* block */ debounceBlock;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)dealloc;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)setupView;
- (void)updateWithNotification:(id)a0;
- (void)debounceSetOn:(BOOL)a0 animated:(BOOL)a1;
- (void)updateForEvent:(id)a0 animated:(BOOL)a1;

@end
