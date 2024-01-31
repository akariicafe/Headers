@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject

@property (weak, nonatomic) SBButtonConsumerClient *client;
@property (nonatomic) long long buttonKind;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
