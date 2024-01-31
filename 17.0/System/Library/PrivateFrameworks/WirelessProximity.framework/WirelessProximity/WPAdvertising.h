@protocol WPAdvertisingDelegate;

@interface WPAdvertising : WPClient

@property (retain, nonatomic) id<WPAdvertisingDelegate> delegate;

+ (id)puckTypeToString:(unsigned char)a0;
+ (unsigned char)puckStringToType:(id)a0;

- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)invalidate;
- (void)registerService:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)clientAsString;
- (void)deregisterService:(id)a0;
- (id)parseCompanyData:(id)a0;

@end
