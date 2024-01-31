@class UNNotificationSettings, UNNotificationTopic;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) UNNotificationTopic *topic;
@property (readonly, copy, nonatomic) UNNotificationSettings *topicSettings;

- (id)initWithTopic:(id)a0 settings:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
