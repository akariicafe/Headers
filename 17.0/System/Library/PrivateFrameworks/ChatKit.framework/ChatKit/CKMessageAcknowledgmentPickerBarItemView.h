@class UIButton, CKMessageAcknowledgmentDraftDescriptor, CKAcknowledgmentGlyphView;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;

@interface CKMessageAcknowledgmentPickerBarItemView : UIView

@property (retain, nonatomic) UIButton *itemButton;
@property (readonly, nonatomic) BOOL displaySelected;
@property (weak, nonatomic) id<CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) CKAcknowledgmentGlyphView *acknowledgmentGlyphView;
@property (readonly, nonatomic) CKMessageAcknowledgmentDraftDescriptor *draft;
@property (readonly, nonatomic) long long messageAcknowledgmentType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithMessageAcknowledgmentDescriptor:(id)a0 initiallySelected:(BOOL)a1;
- (void)itemButtonTapped:(id)a0;

@end
