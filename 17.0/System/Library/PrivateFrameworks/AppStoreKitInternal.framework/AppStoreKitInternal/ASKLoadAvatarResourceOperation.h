@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId;

+ (id)supportedScheme;

- (void)main;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlayerId:(id)a0;
- (id)makePlayerFetchError;

@end
