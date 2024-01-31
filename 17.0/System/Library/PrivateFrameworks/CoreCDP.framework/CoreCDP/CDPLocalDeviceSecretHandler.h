@class CDPContext;
@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject {
    id<CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
}

@property (readonly, nonatomic) CDPContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 handler:(id)a1;
- (void)userDidCancelWithError:(id)a0;
- (void)userDidEnterValidSecret:(id)a0 type:(unsigned long long)a1;

@end
