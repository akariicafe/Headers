@interface SiriAnalyticsFBFStorage : NSObject {
    void /* unknown type, empty encoding */ applicationIdentifier;
    void /* unknown type, empty encoding */ telemetry;
}

- (id)initWithApplicationIdentifier:(id)a0 telemetry:(id)a1;
- (id)init;
- (void)store:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
