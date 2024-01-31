@interface SASettingGetBluetooth : SASettingGetBool

+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
