@class NSString, NSArray;

@interface SANPRemoveOutputDevicesFromGroup : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)removeOutputDevicesFromGroup;
+ (id)removeOutputDevicesFromGroupWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
