@class NSString;

@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate> {
    void *_previewController;
    struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } _linkRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)previewControllerDidDismiss:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (id)presentingViewController;
- (id).cxx_construct;
- (id)initWithSystemPreviewController:(void *)a0;

@end
