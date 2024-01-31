@protocol PUEditExtensionActivityViewControllerDelegate;

@interface PUEditExtensionActivityViewController : UIActivityViewController

@property (weak, nonatomic) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;

- (void)_performActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldShowSystemActivityType:(id)a0;
- (BOOL)_shouldUseModernDesign;
- (BOOL)appWantsLargePreview;
- (BOOL)isPhotosOrCamera;

@end
