@class NSString;

@interface UIMutableUserNotificationActionSettings : UIUserNotificationActionSettings

@property (copy, nonatomic) NSString *category;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActions:(id)a0 forContext:(unsigned long long)a1;

@end
