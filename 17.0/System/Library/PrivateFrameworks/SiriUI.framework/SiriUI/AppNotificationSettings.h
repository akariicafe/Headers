@interface AppNotificationSettings : NSObject

@property (nonatomic, getter=isAnnounceEnabled) BOOL announceEnabled;
@property (nonatomic, getter=areCarPlayBannersEnabled) BOOL carPlayBannersEnabled;

- (BOOL)isEqual:(id)a0;
- (id)initWithAnnounceEnabled:(BOOL)a0 carPlayBannersEnabled:(BOOL)a1;

@end
