@class CHRecognitionSession;
@protocol CHVisualizationDelegate;

@interface CHVisualization : NSObject

@property (readonly, nonatomic) long long layeringPriority;
@property (readonly, nonatomic) BOOL wantsInputDrawings;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (weak, nonatomic) id<CHVisualizationDelegate> delegate;

- (void).cxx_destruct;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRecognitionSession:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
