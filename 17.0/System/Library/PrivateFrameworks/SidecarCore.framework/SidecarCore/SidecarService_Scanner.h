@interface SidecarService_Scanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)makeRequest;
- (id)localizedItemName;

@end
