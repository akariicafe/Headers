@class ConversationSearchOverlayView, MFMessageDisplayMetrics, MFMessageHeaderViewBlock, NSString, NSMutableArray, MessageHeaderViewModel;
@protocol MFMessageHeaderViewDelegate;

@interface MFMessageHeaderView : UIStackView <MUIReusable, ConversationSearchOverlayAdding>

@property (retain, nonatomic) MessageHeaderViewModel *viewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } draggableArea;
@property (retain, nonatomic) ConversationSearchOverlayView *findOverlayView;
@property (weak, nonatomic) id<MFMessageHeaderViewDelegate> delegate;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics;
@property (retain, nonatomic) MFMessageHeaderViewBlock *pinnedBlock;
@property (copy, nonatomic) NSMutableArray *headerBlocks;
@property (nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewPrintFormatter:(id)a1;
- (void)_updateSeparators;
- (void)removeConversationSearchOverlay;
- (id)_animationConstraintsForBlockAtIndex:(unsigned long long)a0;
- (BOOL)_blockHasWhiteOrClearBackground:(id)a0;
- (void)_layoutAnimatedWithCompletion:(id /* block */)a0;
- (void)addConversationSearchOverlay;
- (void)addHeaderBlock:(id)a0 animated:(BOOL)a1;
- (void)displayMessageUsingViewModel:(id)a0;
- (void)insertHeaderBlock:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)removeAllHeaderBlocksAnimated:(BOOL)a0;
- (void)removeHeaderBlock:(id)a0 animated:(BOOL)a1;
- (void)setHeaderBlocks:(id)a0 animated:(BOOL)a1;
- (void)setMessageFlags:(unsigned long long)a0 conversationFlags:(unsigned long long)a1;

@end
