@class NSString;

@interface UIMutableUserNotificationCategory : UIUserNotificationCategory

@property (copy, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActions:(id)a0 forContext:(unsigned long long)a1;

@end
