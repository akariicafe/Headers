@interface WKDownloadProgress : NSProgress {
    struct RetainPtr<NSURLSessionDownloadTask> { void *m_ptr; } m_task;
    struct WeakPtr<WebKit::Download, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_download;
    struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { struct SandboxExtension *m_ptr; } m_sandboxExtension;
}

- (void)publish;
- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)unpublish;
- (void)_updateProgressExtendedAttributeOnProgressFile;
- (id)initWithDownloadTask:(id)a0 download:(void *)a1 URL:(id)a2 sandboxExtension:(struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { struct SandboxExtension *x0; })a3;
- (void)performCancel;

@end
