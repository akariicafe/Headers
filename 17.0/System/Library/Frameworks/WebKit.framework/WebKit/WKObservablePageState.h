@class NSString, NSURL;

@interface WKObservablePageState : NSObject <_WKObservablePageState> {
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { struct WebPageProxy *m_ptr; } _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> { struct __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>> { struct PageLoadStateObserver *__value_; } __ptr_; } _observer;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) double estimatedProgress;
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly, nonatomic) BOOL _webProcessIsResponsive;
@property (readonly, nonatomic) NSURL *unreachableURL;
@property (readonly, nonatomic) struct __SecTrust { } *serverTrust;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPage:(void *)a0;

@end
