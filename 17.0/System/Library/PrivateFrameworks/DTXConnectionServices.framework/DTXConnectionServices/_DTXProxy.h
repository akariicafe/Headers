@class DTXProxyChannel;

@interface _DTXProxy : NSObject {
    DTXProxyChannel *_proxyChannel;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
