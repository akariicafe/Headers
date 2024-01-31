@class NSNumber, NSString;

@interface EDAMClientAccessEntry : FATObject

@property (retain, nonatomic) NSNumber *accessTime;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *ipAddress;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *browserType;
@property (retain, nonatomic) NSNumber *apiKeyId;
@property (retain, nonatomic) NSNumber *longSessionCreated;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *authenticatedClientUserId;
@property (retain, nonatomic) NSNumber *businessAdmin;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
