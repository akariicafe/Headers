@interface HUISoundMeterViewInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ soundMeterView;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurationType:(long long)a0;
- (id)soundMeterViewController;
- (void)updateViewsWithSlowLeq:(double)a0 fastLeq:(double)a1 thresholdLevel:(unsigned long long)a2;

@end
