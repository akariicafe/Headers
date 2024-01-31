@class NSString;

@interface SKAPFSContainerDisk : SKDisk

@property (retain) NSString *designatedPSUUID;
@property (readonly) NSString *apfsUUID;

- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)volumes;
- (id)physicalStores;
- (id)minimalDictionaryRepresentation;
- (id)copyVolumesWithIncludeSnapshots:(BOOL)a0;
- (id)designatedPhysicalStore;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)isVirtualDiskType;
- (id)volumesExcludingSnapshots;

@end
