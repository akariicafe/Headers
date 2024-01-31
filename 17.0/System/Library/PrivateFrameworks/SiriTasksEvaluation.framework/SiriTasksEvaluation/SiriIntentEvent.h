@class NSString, NSData, NSDate;

@interface SiriIntentEvent : NSObject

@property (readonly, nonatomic) NSString *intentId;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSData *eventData;
@property (readonly, copy, nonatomic) NSDate *createdAt;

- (void).cxx_destruct;
- (id)initWithIntentId:(id)a0 eventType:(long long)a1 eventData:(id)a2 createdAt:(id)a3;

@end
