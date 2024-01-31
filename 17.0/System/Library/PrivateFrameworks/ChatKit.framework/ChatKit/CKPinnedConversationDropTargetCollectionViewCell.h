@class NSString, CKPinnedConversationView, UILabel, CKDropZoneCircleView;

@interface CKPinnedConversationDropTargetCollectionViewCell : UICollectionViewCell

@property (class, readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) CKDropZoneCircleView *dropZoneCircleView;
@property (retain, nonatomic) UILabel *instructionLabel;
@property (retain, nonatomic) CKPinnedConversationView *prototypeConversationView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL shouldHideLabel;
@property (nonatomic) BOOL shouldAnimateCircle;

+ (id)uniqueIdentifierForDropTargetAtItemIndex:(long long)a0;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateInstructionLabelColor;

@end
