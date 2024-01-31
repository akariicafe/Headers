@class DTTapConfig;

@interface DTTapMessageHandler : NSObject

@property (readonly, retain, nonatomic) DTTapConfig *config;

- (id)initWithConfig:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)messageReceived:(id)a0;

@end
