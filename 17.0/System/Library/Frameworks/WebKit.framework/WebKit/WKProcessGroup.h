@class WKGeolocationProviderIOS;
@protocol WKProcessGroupDelegate;

@interface WKProcessGroup : NSObject {
    struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> { struct WebProcessPool *m_ptr; } _processPool;
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> { id m_weakReference; } _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> { void *m_ptr; } _geolocationProvider;
}

@property (readonly) struct OpaqueWKContext { } *_contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (weak, nonatomic) id<WKProcessGroupDelegate> delegate;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInjectedBundleURL:(id)a0;
- (id)initWithInjectedBundleURL:(id)a0 andCustomClassesForParameterCoder:(id)a1;

@end
