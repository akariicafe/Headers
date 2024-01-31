@interface AAUploadBatchEventProcessor : NSObject <AAEventProcessorType> {
    void /* unknown type, empty encoding */ proxyEventProcessor;
}

- (id)init;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;
- (id)initWithClient:(id)a0 endpoint:(id)a1 config:(id)a2;
- (id)initWithClient:(id)a0 endpoint:(id)a1;
- (id)initWithClient:(id)a0 endpoint:(id)a1 contentType:(long long)a2 config:(id)a3;

@end
