@class NSString;

@interface DEDRapportManager : NSObject

@property (readonly) NSString *mediaSystemName;
@property (readonly, nonatomic) long long mediaSystemRole;
@property (readonly) NSString *mediaSystemIdentifier;
@property (readonly) NSString *mediaRemoteIdentifier;

+ (id)sharedInstance;

- (void)start;

@end
