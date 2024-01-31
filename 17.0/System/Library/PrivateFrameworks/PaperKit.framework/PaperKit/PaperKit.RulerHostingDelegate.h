@interface PaperKit.RulerHostingDelegate : NSObject <PKRulerHostingDelegate> {
    void /* unknown type, empty encoding */ rulerHostView;
    void /* unknown type, empty encoding */ sharedRuler;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)rulerHostWantsSharedRuler;
- (id)rulerHostingView;

@end
