@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, copy, nonatomic) NSString *sortIdentifier;

+ (id)topicWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_description;
- (id)description;
- (id)_initWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
