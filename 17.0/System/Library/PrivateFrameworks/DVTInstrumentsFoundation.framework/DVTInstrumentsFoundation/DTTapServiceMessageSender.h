@class DTXChannel;

@interface DTTapServiceMessageSender : NSObject

@property (readonly, retain, nonatomic) DTXChannel *channel;

- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (void)sendBarrierMessage;

@end
