@interface ContactlessReaderUI.InterruptionMonitor : NSObject <CXCallObserverDelegate, SBSHardwareButtonEventConsuming> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ callObserver;
    void /* unknown type, empty encoding */ layoutMonitor;
    void /* unknown type, empty encoding */ hardwareButtonConsumer;
    void /* unknown type, empty encoding */ _interruption;
}

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)consumeDoublePressUpForButtonKind:(long long)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
