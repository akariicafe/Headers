@class PKMentionItem, NSArray, UIColor, UIView;
@protocol PKMentionViewDelegate;

@interface PKMentionView : PKDetectionView

@property (retain, nonatomic) UIView *blankPreviewView;
@property (copy, nonatomic) NSArray *possibleParticipants;
@property (readonly, nonatomic) PKMentionItem *mentionItem;
@property (retain, nonatomic) UIColor *mentionColor;
@property (weak, nonatomic) id<PKMentionViewDelegate> delegate;

- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)accessibilityIdentifier;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)item;
- (id)_underlineColor;
- (id)accessibilityValue;
- (double)_underlineThickness;
- (id)initWithMentionItem:(id)a0 possibleParticipants:(id)a1 inDrawing:(id)a2;
- (void)updateActivationState;

@end
