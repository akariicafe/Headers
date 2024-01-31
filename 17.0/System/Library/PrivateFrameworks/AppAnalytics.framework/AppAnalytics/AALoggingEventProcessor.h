@interface AALoggingEventProcessor : NSObject <AAEventProcessorType> {
    void /* unknown type, empty encoding */ proxyEventProcessor;
}

- (id)init;
- (id)initWithFormat:(long long)a0;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;
- (id)initWithFormat:(long long)a0 subsystem:(id)a1;

@end
