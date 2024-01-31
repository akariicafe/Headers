@interface SidecarService_LosslessScanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)makeRequest;
- (id)localizedItemName;

@end
