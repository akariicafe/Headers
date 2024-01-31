@interface SADeviceControlRebootDevice : SABaseClientBoundCommand

@property (nonatomic) BOOL isShutdownOnly;

+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
