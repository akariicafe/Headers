@class CKMessagePartChatItem;
@protocol CKMessageAcknowledgmentPickerBarDelegate;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate>

@property (weak, nonatomic) id<CKMessageAcknowledgmentPickerBarDelegate> delegate;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;
@property (nonatomic) char forcedOrientation;
@property (nonatomic) BOOL useForcedOrientation;
@property (nonatomic) char balloonAnchorVerticalOrientation;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)isAnchoredToTop;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithChatItem:(id)a0;
- (void)performCancelAnimation:(id /* block */)a0;
- (void)performSendAnimation:(id /* block */)a0;
- (void)performShowAnimation:(id /* block */)a0;
- (void)pickerBarItemViewSelectionDidChange:(id)a0;
- (id)pickerView;

@end
