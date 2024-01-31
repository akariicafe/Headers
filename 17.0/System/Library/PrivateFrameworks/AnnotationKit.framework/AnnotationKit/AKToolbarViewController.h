@class AKController;

@interface AKToolbarViewController : UIViewController

@property (weak) AKController *controller;
@property (readonly) BOOL isPresentingPopover;

+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)a0;

- (void)teardown;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)revalidateItems;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (id)_toolbarButtonItemOfType:(unsigned long long)a0;
- (void)setFillColorUIDisplayToColor:(id)a0;

@end
