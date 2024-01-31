@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying> {
    struct { unsigned char originalLibrarySize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMPSDeviceID;
@property (retain, nonatomic) NSString *mPSDeviceID;
@property (readonly, nonatomic) BOOL hasICPLDeviceID;
@property (retain, nonatomic) NSString *iCPLDeviceID;
@property (readonly, nonatomic) BOOL hasBackupDeviceID;
@property (retain, nonatomic) NSString *backupDeviceID;
@property (readonly, nonatomic) BOOL hasBackupDeviceUUID;
@property (retain, nonatomic) NSString *backupDeviceUUID;
@property (readonly, nonatomic) BOOL hasBackupDeviceUDID;
@property (retain, nonatomic) NSString *backupDeviceUDID;
@property (nonatomic) BOOL hasOriginalLibrarySize;
@property (nonatomic) long long originalLibrarySize;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
