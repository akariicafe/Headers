@class NSString;

@interface SAUILaunchTVRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteId;

+ (id)launchTVRemote;
+ (id)launchTVRemoteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
