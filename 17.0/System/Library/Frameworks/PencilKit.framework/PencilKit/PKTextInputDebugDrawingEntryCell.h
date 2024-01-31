@class UIImageView, PKDrawing;

@interface PKTextInputDebugDrawingEntryCell : UITableViewCell {
    UIImageView *_drawingImageView;
}

@property (retain, nonatomic) PKDrawing *drawing;

- (void).cxx_destruct;
- (void)_updateDrawingView;

@end
