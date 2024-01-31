@interface WebPreviewConverterDelegate : NSObject {
    struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _delegate;
}

- (id).cxx_construct;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(void *)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;

@end
