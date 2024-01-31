@class NSString, NSDate;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying>

@property (readonly, copy) NSString *notificationIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSDate *date;

+ (id)metadataForNotificationRequest:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithNotificationIdentifier:(id)a0 bundleIdentifier:(id)a1 date:(id)a2;

@end
