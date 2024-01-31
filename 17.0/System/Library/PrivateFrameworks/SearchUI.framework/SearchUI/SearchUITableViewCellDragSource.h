@interface SearchUITableViewCellDragSource : SearchUIDragSource

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;

- (id)dragParametersForPreviewView:(id)a0;

@end
