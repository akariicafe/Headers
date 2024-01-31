@class PKHashtagItem, UIView;
@protocol PKHashtagViewDelegate;

@interface PKHashtagView : PKDetectionView

@property (retain, nonatomic) UIView *blankPreviewView;
@property (readonly, nonatomic) PKHashtagItem *hashtagItem;
@property (weak, nonatomic) id<PKHashtagViewDelegate> delegate;

- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)accessibilityIdentifier;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)item;
- (id)_underlineColor;
- (id)accessibilityValue;
- (double)_underlineThickness;
- (id)initWithHashtagItem:(id)a0 inDrawing:(id)a1;
- (void)updateActivationState;

@end
