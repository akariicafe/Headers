@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) BOOL isContentAvailable;
@property (readonly, nonatomic) BOOL isMutableContent;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;

@end
