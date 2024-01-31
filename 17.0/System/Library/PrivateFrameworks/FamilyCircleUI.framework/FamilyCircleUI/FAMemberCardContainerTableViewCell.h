@class FAMemberStackView, UIStackView;
@protocol FAFamilyMemberCardTapHandler;

@interface FAMemberCardContainerTableViewCell : PSTableCell <FAMemberStackViewDelegate> {
    UIStackView *cardRowView;
    FAMemberStackView *cardOneView;
    FAMemberStackView *cardTwoView;
}

@property (retain) id<FAFamilyMemberCardTapHandler> tapHandler;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)memberCardTappedInStackViewWith:(id)a0;
- (void)setupCardRowView;
- (void)setupCellView;

@end
