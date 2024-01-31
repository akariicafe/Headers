@class NSString, PurpleTrustClientEntity, PurpleTrustAppletEntity, NSObject;

@interface PurpleTrustKeyEntity : NSManagedObject

@property (retain, nonatomic) NSObject *blob;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) int version;
@property (retain, nonatomic) PurpleTrustAppletEntity *applet;
@property (retain, nonatomic) PurpleTrustClientEntity *client;

+ (id)fetchRequest;

@end
