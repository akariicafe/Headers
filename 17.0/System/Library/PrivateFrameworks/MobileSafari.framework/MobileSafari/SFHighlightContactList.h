@class SFHighlightContactListButton, NSArray, NSString, UIStackView, UILabel, NSLayoutConstraint;

@interface SFHighlightContactList : UIView <SFHighlightContactListCellDelegate> {
    UILabel *_headerLabel;
    SFHighlightContactListButton *_manageButton;
    NSLayoutConstraint *_manageButtonTopConstraintForEmptyList;
    NSLayoutConstraint *_manageButtonTopConstraintForNonEmptyList;
    UIStackView *_stackView;
    BOOL _needsResizeAfterLayout;
}

@property (copy, nonatomic) id /* block */ infoViewControllerHandler;
@property (copy, nonatomic) id /* block */ rowTapHandler;
@property (copy, nonatomic) id /* block */ manageHandler;
@property (copy, nonatomic) id /* block */ resizeHandler;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContacts:(id)a0;
- (void)_didTapManage:(id)a0;
- (void)_updateList;
- (void)cellDidReceiveTap:(id)a0;

@end
