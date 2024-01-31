@class FTMessageDelivery, MessageServiceSession;

@interface StickerRefreshDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (readonly, weak, nonatomic) MessageServiceSession *session;

- (id)initWithSession:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_sendFTMessage:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)sendFTMessage:(id)a0 attempts:(unsigned long long)a1 withCompletionBlock:(id /* block */)a2;

@end
