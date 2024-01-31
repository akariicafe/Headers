@class NSDate, SKUIGiftTableSectionHeaderView, SKUIItem;
@protocol SKUIGiftSendDateSectionDelegate;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection <SKUIGiftDateTableViewCellDelegate> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
}

@property (weak, nonatomic) id<SKUIGiftSendDateSectionDelegate> delegate;
@property (retain, nonatomic) SKUIItem *giftItem;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerInsets;
@property (copy, nonatomic) NSDate *sendDate;
@property (nonatomic) long long sendDateStyle;

- (void).cxx_destruct;
- (id)_headerView;
- (void)updateCell:(id)a0 forTransitionToSize:(struct CGSize { double x0; double x1; })a1;
- (void)giftDateTableViewCell:(id)a0 didChangeDate:(id)a1;
- (id)headerViewForTableView:(id)a0;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
