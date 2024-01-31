@interface WKAirPlayRoutePicker : NSObject {
    struct RetainPtr<MPMediaControlsViewController> { void *m_ptr; } _actionSheet;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)showFromView:(id)a0 routeSharingPolicy:(unsigned char)a1 routingContextUID:(id)a2 hasVideo:(BOOL)a3;

@end
