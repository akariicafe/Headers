@protocol TKTonePickerTableViewSeparatorObserver, TKTonePickerTableViewLayoutMarginsObserver;

@interface TKTonePickerTableView : UITableView

@property (weak, nonatomic) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;
@property (weak, nonatomic) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;

- (void)layoutMarginsDidChange;
- (void)setSeparatorColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleSeparatorColorDidChange;

@end
