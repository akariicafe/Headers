@class NSString;

@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate> {
    struct RetainPtr<UIView> { void *m_ptr; } _view;
    struct RetainPtr<CALayer> { void *m_ptr; } _layer;
    struct RetainPtr<NSString> { void *m_ptr; } _kind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIdentifyWebViews;
+ (void)installForWebViewIfNeeded:(id)a0 kind:(id)a1 deprecated:(BOOL)a2;

- (void)dealloc;
- (id).cxx_construct;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 kind:(id)a1 deprecated:(BOOL)a2;

@end
