@class NSError, TKSmartCard;

@interface TKSmartCardWithError : TKSmartCard {
    TKSmartCard *_parentCard;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)beginSessionWithReply:(id /* block */)a0;
- (void)transmitRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithCard:(id)a0 error:(id)a1;
- (void)sendIns:(unsigned char)a0 p1:(unsigned char)a1 p2:(unsigned char)a2 data:(id)a3 le:(id)a4 reply:(id /* block */)a5;

@end
