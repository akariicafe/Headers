@class CALNNotification, NSString, BSServiceConnectionEndpoint;

@interface CALNNotificationResponse : NSObject

@property (readonly, nonatomic) CALNNotification *notification;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *originIdentifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

- (unsigned long long)hash;
- (BOOL)isEqualToResponse:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

@end
