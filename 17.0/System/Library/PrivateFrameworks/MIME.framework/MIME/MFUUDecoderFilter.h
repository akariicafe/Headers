@class NSObject;
@protocol OS_dispatch_data;

@interface MFUUDecoderFilter : MFBaseFilterDataConsumer {
    NSObject<OS_dispatch_data> *_data;
}

- (long long)appendData:(id)a0;
- (void)done;
- (void).cxx_destruct;

@end
