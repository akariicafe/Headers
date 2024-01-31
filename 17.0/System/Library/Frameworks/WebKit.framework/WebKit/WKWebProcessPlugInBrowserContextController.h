@class WKDOMRange, NSString, WKBrowsingContextHandle, WKWebProcessPlugInFrame, _WKRemoteObjectRegistry, WKDOMDocument;
@protocol WKWebProcessPlugInEditingDelegate, WKWebProcessPlugInLoadDelegate, WKWebProcessPlugInFormDelegatePrivate;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPage> { struct type { unsigned char __lx[2240]; } data; } _page;
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> { id m_weakReference; } _loadDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> { id m_weakReference; } _formDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> { id m_weakReference; } _editingDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> { void *m_ptr; } _remoteObjectRegistry;
}

@property (readonly, nonatomic) struct OpaqueWKBundlePage { } *_bundlePageRef;
@property (readonly, nonatomic) WKBrowsingContextHandle *handle;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (weak, setter=_setFormDelegate:) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate;
@property (weak, setter=_setEditingDelegate:) id<WKWebProcessPlugInEditingDelegate> _editingDelegate;
@property (nonatomic, setter=_setDefersLoading:) BOOL _defersLoading;
@property (readonly, nonatomic) BOOL _usesNonPersistentWebsiteDataStore;
@property (readonly, nonatomic) NSString *_groupIdentifier;
@property (readonly) WKDOMDocument *mainFrameDocument;
@property (readonly) WKDOMRange *selectedRange;
@property (readonly) WKWebProcessPlugInFrame *mainFrame;
@property (weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookUpBrowsingContextFromHandle:(id)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
