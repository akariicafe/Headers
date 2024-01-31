@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic, getter=isTapDismissable) BOOL tapDismissable;
@property (nonatomic) BOOL prefersGrabberVisible;

@end
