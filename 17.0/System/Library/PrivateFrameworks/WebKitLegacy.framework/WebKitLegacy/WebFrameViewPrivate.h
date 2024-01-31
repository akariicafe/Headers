@class WebFrame;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    struct RetainPtr<WAKScrollView> { void *m_ptr; } frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
