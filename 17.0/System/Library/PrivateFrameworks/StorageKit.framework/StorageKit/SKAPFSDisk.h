@class NSString;

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol>

@property unsigned long long reserveSpace;
@property unsigned long long quotaSpace;
@property unsigned long long usedSpace;
@property BOOL isEncrypted;
@property BOOL defaultEffaceable;
@property (retain) NSString *apfsRole;
@property (retain) NSString *apfsVolumeGroupUUID;
@property (readonly) NSString *apfsUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)container;
- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)minimalDictionaryRepresentation;
- (id)getAPFSVolumeRole;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)wholeDiskIdentifier;

@end
