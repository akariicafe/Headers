@interface FMFindingUI.FMR1DevicePoseProvider : PRVIODevicePoseProvider {
    void /* unknown type, empty encoding */ frameDelegate;
}

- (id)init;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (id)initWithARSession:(id)a0;

@end
