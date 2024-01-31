@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double baselineOffset;

- (void)invalidate;
- (int)elementKind;
- (id)rendererForAttachment;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
