@class _UIStatusBarIdentifier, _UIStatusBarStringView;

@interface _UIStatusBarTimeItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *timeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *shortTimeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *pillTimeDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *dateDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarStringView *timeView;
@property (retain, nonatomic) _UIStatusBarStringView *shortTimeView;
@property (retain, nonatomic) _UIStatusBarStringView *pillTimeView;
@property (retain, nonatomic) _UIStatusBarStringView *dateView;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_shortTimeView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_dateView;
- (void)_create_timeView;
- (void)_create_pillTimeView;

@end
