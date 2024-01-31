@class NSDictionary, NSString;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *baseURLString;
@property (readonly, copy, nonatomic) NSString *notificationUserID;
@property (readonly, copy, nonatomic) NSString *deviceToken;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly, nonatomic) int deviceDigestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
