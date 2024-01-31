@interface WKLayerHostView : UIView {
    struct WeakObjCPtr<UIWindow> { id m_weakReference; } _window;
}

@property (nonatomic) unsigned int contextID;

+ (Class)layerClass;

- (void)willMoveToWindow:(id)a0;
- (id)layerHost;
- (id)window;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)clipsToBounds;

@end
