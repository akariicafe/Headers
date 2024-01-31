@class NSString, NSData, NSNumber, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL shareWebUsage;
@property (copy, nonatomic) NSNumber *isAppAndWebsiteActivityEnabled;
@property (retain, nonatomic) STFamilyOrganization *organization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) BOOL isDirty;

- (id)redactedDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)a0;

@end
