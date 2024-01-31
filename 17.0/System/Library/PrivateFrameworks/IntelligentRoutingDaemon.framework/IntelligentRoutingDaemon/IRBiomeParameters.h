@interface IRBiomeParameters : NSObject

@property (nonatomic) long long eventType;

- (id)contextPublisher;
- (Class)biomeEventClass;
- (id)initWithBiomeEventType:(long long)a0;
- (id)queryPublisherWithOptions:(id)a0;

@end
