@class STUIStatusBarIdentifier, STUIStatusBarStringView;

@interface STUIStatusBarTimeItem : STUIStatusBarItem

@property (class, readonly) STUIStatusBarIdentifier *timeDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *shortTimeDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *pillTimeDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *dateDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarStringView *timeView;
@property (retain, nonatomic) STUIStatusBarStringView *shortTimeView;
@property (retain, nonatomic) STUIStatusBarStringView *pillTimeView;
@property (retain, nonatomic) STUIStatusBarStringView *dateView;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_shortTimeView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_dateView;
- (void)_create_timeView;
- (void)_create_pillTimeView;

@end
