@class NSString, NSMutableArray;
@protocol IDSXPCGroupSessionKeyValueDelivery;

@interface IDSGroupSessionKeyValueDelivery : NSObject <NSSecureCoding> {
    NSString *_sessionID;
    id<IDSXPCGroupSessionKeyValueDelivery> _xpc;
    NSMutableArray *_deliveryHandlers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0;
- (void)_setUpXPC;
- (void)addDeliveryHandler:(id)a0;
- (void)removeDeliveryHandler:(id)a0;
- (void)requestDataForKey:(unsigned int)a0 participantID:(unsigned long long)a1;
- (void)sendData:(id)a0 forKey:(unsigned int)a1 encryption:(unsigned int)a2 capability:(id)a3;
- (void)sendData:(id)a0 forKey:(unsigned int)a1 encryption:(unsigned int)a2 capability:(id)a3 completionHandler:(id /* block */)a4;
- (void)test_receiveData:(id)a0 forKey:(unsigned int)a1 fromParticipant:(unsigned long long)a2;

@end
