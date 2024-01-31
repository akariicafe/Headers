@class NSString, NSNumber;

@interface RTDarwinNotificationRecord : NSObject

@property (copy, nonatomic) NSString *notificationName;
@property (copy, nonatomic) NSNumber *registrationToken;
@property (copy, nonatomic) id /* block */ handler;

- (id)init;
- (id)initWithNotificationName:(id)a0 registrationToken:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
