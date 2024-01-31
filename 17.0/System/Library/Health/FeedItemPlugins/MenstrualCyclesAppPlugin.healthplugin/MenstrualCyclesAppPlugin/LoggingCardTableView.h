@protocol LoggingCardTableViewObserver;

@interface LoggingCardTableView : UITableView

@property (nonatomic) struct CGSize { double width; double height; } previousContentSize;
@property (weak) id<LoggingCardTableViewObserver> loggingCardTableViewObserver;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
