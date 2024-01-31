@interface HMDHH2AutoMigrationEligibilityResult : HMFObject

@property (readonly, getter=isEligible) BOOL eligible;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long iCloudAccountStatus;
@property (readonly) unsigned long long unsupportedDevices;
@property (readonly) BOOL hasOnlyEmptyHomes;
@property (readonly) unsigned long long numberOwnedNonEmptyHomes;
@property (readonly) unsigned long long numberUnownedSharedHomes;
@property (readonly) unsigned long long numberOwnedSharedHomes;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(unsigned long long)a0 iCloudAccountStatus:(unsigned long long)a1 unsupportedDevices:(unsigned long long)a2 hasOnlyEmptyHomes:(BOOL)a3 numberOwnedNonEmptyHomes:(unsigned long long)a4 numberUnownedSharedHomes:(unsigned long long)a5 numberOwnedSharedHomes:(unsigned long long)a6;

@end
