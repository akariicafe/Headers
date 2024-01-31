@class UIView, NSString, UIImageView, CKLabel, CKDateLabel, CKTextBalloonView, CKAvatarView;

@interface CKMessageSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>

@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isFromGroupConversation;
@property (nonatomic) struct CKMessageSearchResultVisibilityContext { BOOL isGroupedResult; BOOL isFirstResultCell; BOOL isLastResultCell; BOOL isLastResultInGroupCell; BOOL shouldShowConversationName; BOOL shouldShowSenderName; BOOL shouldShowDate; BOOL shouldShowSeparator; double topSpacing; double bottomSpacing; } visibilityContext;
@property (retain, nonatomic) CKLabel *conversationNameLabel;
@property (retain, nonatomic) CKLabel *senderLabel;
@property (retain, nonatomic) CKDateLabel *dateLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UIView *groupingSeparatorView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_internalInit;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_annotatedResultStringForResult:(id)a0 searchText:(id)a1;
- (id)_balloonFilterForUserInterfaceStyle:(long long)a0;
- (void)_configureAvatarForResult:(id)a0;
- (void)_configureBalloonViewForResult:(id)a0 searchText:(id)a1;
- (void)_configureDateLabelForResult:(id)a0;
- (void)_configureLabelFonts;
- (void)_configureSenderLabelForResult:(id)a0 searchText:(id)a1;
- (void)_layoutInternalSubviews;
- (void)_proposedBalloonY:(double *)a0 afterLayoutForView:(id)a1;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2 visibilityContext:(struct CKMessageSearchResultVisibilityContext { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; double x8; double x9; })a3;
- (void)refreshForSearchTextIfNeeded:(id)a0;

@end
