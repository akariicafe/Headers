@class NSString, ASVInlinePreview;

@interface WKModelView : WKCompositingView <WKNativelyInteractible> {
    struct RetainPtr<ASVInlinePreview> { void *m_ptr; } _preview;
    struct RetainPtr<WKModelInteractionGestureRecognizer> { void *m_ptr; } _modelInteractionGestureRecognizer;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _filePath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_processIdentifier; } _layerID;
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
}

@property (readonly, nonatomic) ASVInlinePreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (id)initWithModel:(void *)a0 layerID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x0; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x1; })a1 page:(void *)a2;
- (BOOL)createFileForModel:(void *)a0;
- (void).cxx_destruct;
- (void)createPreview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
