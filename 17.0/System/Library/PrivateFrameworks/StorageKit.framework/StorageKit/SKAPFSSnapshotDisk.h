@class NSString;

@interface SKAPFSSnapshotDisk : SKAPFSDisk {
    NSString *_apfsUUID;
}

@property (retain) NSString *snapshotName;
@property long long sealStatus;
@property (retain) NSString *apfsUUID;
@property (readonly) NSString *snapshotUUID;

- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)minimalDictionaryRepresentation;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;

@end
