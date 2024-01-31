@class UIEvent;

@interface WKWebEvent : WebEvent {
    struct RetainPtr<UIEvent> { void *m_ptr; } _uiEvent;
}

@property (readonly, retain, nonatomic) UIEvent *uiEvent;

- (id)initWithEvent:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
