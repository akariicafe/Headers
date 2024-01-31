@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject

@property (weak) AKPageController *pageController;

- (void).cxx_destruct;
- (id)initWithPageController:(id)a0;
- (void)performUndo:(id)a0;

@end
