@class HDCodableSyncEntityVersionMap, NSString, HDCodableSyncIdentity, NSData, HDCodableNanoSyncChangeSet, HDCodableNanoSyncStatus, HDCodableNanoSyncActivationRestore;

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasPersistentPairingUUID;
@property (retain, nonatomic) NSData *persistentPairingUUID;
@property (readonly, nonatomic) BOOL hasHealthPairingUUID;
@property (retain, nonatomic) NSData *healthPairingUUID;
@property (readonly, nonatomic) BOOL hasChangeSet;
@property (retain, nonatomic) HDCodableNanoSyncChangeSet *changeSet;
@property (readonly, nonatomic) BOOL hasStatus;
@property (retain, nonatomic) HDCodableNanoSyncStatus *status;
@property (readonly, nonatomic) BOOL hasActivationRestore;
@property (retain, nonatomic) HDCodableNanoSyncActivationRestore *activationRestore;
@property (readonly, nonatomic) BOOL hasEntityVersionMap;
@property (retain, nonatomic) HDCodableSyncEntityVersionMap *entityVersionMap;
@property (readonly, nonatomic) BOOL hasCurrentSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *currentSyncIdentity;

+ (id)messageFromPersistentUserInfo:(id)a0;
+ (id)messageWithSyncStore:(id)a0 profile:(id)a1;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPersistentUserInfo;
- (id)decodedHealthPairingUUID;
- (id)decodedPersistentPairingUUID;
- (id)nanoSyncDescription;

@end
