@class NSString, NSData, NSMutableArray;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    struct { unsigned char sequenceNumber : 1; unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasRestoreIdentifier;
@property (retain, nonatomic) NSData *restoreIdentifier;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) BOOL hasDefaultSourceBundleIdentifier;
@property (retain, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *obliteratedHealthPairingUUIDs;

+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (id)activationRestoreWithRestoreUUID:(id)a0 sequenceNumber:(long long)a1 statusCode:(int)a2;
+ (Class)obliteratedHealthPairingUUIDsType;
+ (id)persistentUserInfoKey;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (BOOL)hasRequiredFields;
- (void)addObliteratedHealthPairingUUIDs:(id)a0;
- (void)addToPersistentUserInfo:(id)a0;
- (void)clearObliteratedHealthPairingUUIDs;
- (id)copyForPersistentUserInfo;
- (id)decodedObliteratedHealthPairingUUIDs;
- (id)decodedRestoreUUID;
- (void)encodeObliteratedHealthPairingUUIDs:(id)a0;
- (id)nanoSyncDescription;
- (id)obliteratedHealthPairingUUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)obliteratedHealthPairingUUIDsCount;

@end
