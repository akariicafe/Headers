@interface ATXBMStoreEvent : NSObject <ATXBMStoreEventProtocol>

@property (readonly, nonatomic) id eventBody;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithEventBody:(id)a0 timestamp:(double)a1;

@end
