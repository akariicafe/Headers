@class NSString, STLocalOrganization;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)a0;

@end
