@class NSString;

@interface HDPendingNotificationInstruction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sendingDeviceName;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageIdentifier:(id)a0 categoryIdentifier:(id)a1 sendingDeviceName:(id)a2;

@end
