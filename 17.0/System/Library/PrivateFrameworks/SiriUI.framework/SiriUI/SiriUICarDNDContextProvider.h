@class SADeviceCarDNDHintContext;
@protocol SiriUICarDNDContextProviderDelegate;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider>

@property (weak, nonatomic) id<SiriUICarDNDContextProviderDelegate> delegate;
@property (copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext;

- (void).cxx_destruct;
- (BOOL)allowContextProvider:(id)a0;
- (id)getCurrentContext;

@end
