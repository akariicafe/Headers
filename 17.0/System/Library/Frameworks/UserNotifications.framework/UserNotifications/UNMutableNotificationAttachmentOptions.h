@class NSDictionary;

@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions

@property (nonatomic) unsigned long long displayLocation;
@property (copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayLocation:(unsigned long long)a0;
- (void)setThumbnailGeneratorUserInfo:(id)a0;

@end
