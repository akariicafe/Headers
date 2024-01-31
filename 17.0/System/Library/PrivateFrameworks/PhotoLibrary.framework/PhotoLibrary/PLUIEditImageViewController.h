@interface PLUIEditImageViewController : PLUIImageViewController {
    int _saveOptions;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;

- (void)dealloc;
- (unsigned short)imageFormat;
- (id)initWithPhoto:(id)a0;
- (id)photo;
- (int)cropOverlayMode;
- (void)cropOverlayWasCancelled:(id)a0;
- (void)cropOverlayWasOKed:(id)a0;
- (unsigned long long)_contentAutoresizingMask;
- (unsigned long long)_tileAutoresizingMask;
- (void)cropOverlay:(id)a0 didFinishSaving:(id)a1;
- (id)imageTile;
- (int)saveOptions;
- (void)setImageSavingOptions:(int)a0;

@end
