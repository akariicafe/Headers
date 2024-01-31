@class NSString, UIImageView, UILabel, TUConversation, UIButton;

@interface CKDetailsTUConversationCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) TUConversation *conversation;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) double insetPadding;
@property (readonly, nonatomic) double buttonInteritemSpacing;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) double buttonTitleHorizontalSpacing;
@property (readonly, nonatomic) double buttonTitleVerticalSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void)updateView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupView;
- (void)_handleMultiWayStateChange:(id)a0;
- (void)actionButtonTapped:(id)a0;
- (void)addConstraints;
- (void)configureActionButton;
- (void)configureIconView;
- (void)configureSubtitle;
- (void)formatIconViewForExpanse;
- (void)formatIconViewForFaceTime;
- (void)formatSubtitleForText;
- (void)formatTitle;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 conversation:(id)a2;

@end
