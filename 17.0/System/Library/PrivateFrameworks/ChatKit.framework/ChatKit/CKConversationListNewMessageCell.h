@class CKAvatarView, NSString, CKConversationListCellLayout, CKConversation, NSObject, UIButton;
@protocol CKConversationListCellDelegate;

@interface CKConversationListNewMessageCell : UITableViewCell <CKConversationListCellLayoutConfigurable>

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property (readonly, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, nonatomic) CKAvatarView *avatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (BOOL)_isCollapsed;
- (void)_updateLabelVisibility;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteButtonTapped;
- (double)leadingLayoutMargin;
- (BOOL)showingEditControl;
- (void)updateContentsForConversation:(id)a0;
- (void)updateFontSize;
- (void)updateWithForwardedConfigurationState:(id)a0;

@end
