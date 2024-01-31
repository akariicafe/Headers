@class NSString, NSMutableDictionary;

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>

@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (copy, nonatomic) NSString *baseURLString;
@property (copy, nonatomic) NSString *notificationUserID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;
@property (nonatomic) int deviceDigestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(id)a0;

@end
