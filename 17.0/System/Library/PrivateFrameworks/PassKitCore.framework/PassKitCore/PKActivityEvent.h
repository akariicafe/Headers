@class NSString, NSDate;

@interface PKActivityEvent : NSObject

@property (readonly, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;

+ (id)eventsWithTransactions:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 date:(id)a1 unread:(BOOL)a2;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
