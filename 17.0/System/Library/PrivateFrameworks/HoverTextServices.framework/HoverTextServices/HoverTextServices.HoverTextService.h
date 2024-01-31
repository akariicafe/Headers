@class _TtC17HoverTextServices16HoverTextService;

@interface HoverTextServices.HoverTextService : NSObject {
    void /* unknown type, empty encoding */ serviceImpl;
}

@property (class, nonatomic, readonly) _TtC17HoverTextServices16HoverTextService *sharedInstance;

- (void)showAlert:(id)a0;
- (BOOL)startHoverTextAndReturnError:(id *)a0;
- (BOOL)stopHoverTextAndReturnError:(id *)a0;
- (id)init;
- (void).cxx_destruct;

@end
