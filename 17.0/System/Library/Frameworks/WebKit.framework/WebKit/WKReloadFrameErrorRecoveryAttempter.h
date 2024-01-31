@class NSString;

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting, NSSecureCoding> {
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct RetainPtr<_WKFrameHandle> { void *m_ptr; } _frameHandle;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _urlString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)attemptRecovery;
- (id)initWithWebView:(id)a0 frameHandle:(id)a1 urlString:(const void *)a2;

@end
