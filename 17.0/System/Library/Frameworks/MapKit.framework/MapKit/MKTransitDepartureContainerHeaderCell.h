@class MKTransitDepartureContainerHeaderView, MKTransitDepartureContainerHeaderViewModel;

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitDepartureContainerHeaderView *_headerView;
}

@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_commonInit;

@end
