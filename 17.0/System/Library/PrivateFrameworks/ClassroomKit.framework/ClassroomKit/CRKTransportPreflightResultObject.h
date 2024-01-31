@class CATTransport;

@interface CRKTransportPreflightResultObject : NSObject

@property (retain, nonatomic) CATTransport *transport;
@property (readonly, nonatomic) BOOL shouldResetBackoff;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransport:(id)a0 shouldResetBackoff:(BOOL)a1;
- (id)takeTransport;

@end
