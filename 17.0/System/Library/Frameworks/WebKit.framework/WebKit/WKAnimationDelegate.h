@class NSString;

@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_processIdentifier; } _layerID;
    void *_layerTreeHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithLayerID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x0; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x1; })a0 layerTreeHost:(void *)a1;

@end
