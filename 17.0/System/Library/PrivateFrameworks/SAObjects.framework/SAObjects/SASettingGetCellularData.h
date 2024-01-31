@interface SASettingGetCellularData : SASettingGetBool

+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
