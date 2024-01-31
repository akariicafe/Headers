@class PKPaletteHostView, PKDrawingPaletteView;
@protocol PKPaletteViewControllerDelegate;

@interface PKPaletteViewController : UIViewController {
    PKPaletteHostView *_hostView;
}

@property (weak, nonatomic) id<PKPaletteViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaletteHostView *paletteHostView;
@property (readonly, nonatomic) PKDrawingPaletteView *paletteView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;

@end
