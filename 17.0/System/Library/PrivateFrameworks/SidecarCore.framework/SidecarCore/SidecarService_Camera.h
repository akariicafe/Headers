@interface SidecarService_Camera : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)localizedItemName;
- (id)mutableRequestMessage;

@end
