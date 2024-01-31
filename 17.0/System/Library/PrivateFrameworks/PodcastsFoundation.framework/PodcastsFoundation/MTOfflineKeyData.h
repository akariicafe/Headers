@class NSString, NSData;

@interface MTOfflineKeyData : NSManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long storeTrackId;
@property (nonatomic) long long secureInvalidationDsid;
@property (retain, nonatomic) NSString *keyUri;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double lastRenewedDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) BOOL pendingDeletion;

@end
