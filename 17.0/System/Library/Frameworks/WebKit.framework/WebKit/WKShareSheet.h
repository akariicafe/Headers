@class NSString;
@protocol WKShareSheetDelegate;

@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate> {
    struct RetainPtr<NSURL> { void *m_ptr; } _temporaryFileShareDirectory;
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct WeakObjCPtr<id<WKShareSheetDelegate>> { id m_weakReference; } _delegate;
    struct CompletionHandler<void (bool)> { struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, bool>>> { void *__value_; } __ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RetainPtr<UIActivityViewController> { void *m_ptr; } _shareSheetViewController;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentationViewController;
    BOOL _didShareSuccessfully;
}

@property (weak, nonatomic) id<WKShareSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTemporarySharingDirectory;
+ (id)createRandomSharingDirectoryForFile:(id)a0;
+ (id)writeFileToShareableURL:(id)a0 data:(id)a1 temporaryDirectory:(id)a2;

- (void)dismiss;
- (id)initWithView:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)presentWithParameters:(const void *)a0 inRect:(struct optional<WebCore::FloatRect> { union { char x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; } x0; BOOL x1; })a1 completionHandler:(void *)a2;
- (void)presentWithShareDataArray:(id)a0 inRect:(struct optional<WebCore::FloatRect> { union { char x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; } x0; BOOL x1; })a1;

@end
