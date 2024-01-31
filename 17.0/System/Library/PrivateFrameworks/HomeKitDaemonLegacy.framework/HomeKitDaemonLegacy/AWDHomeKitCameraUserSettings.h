@interface AWDHomeKitCameraUserSettings : PBCodable <NSCopying> {
    struct { unsigned char isImportingFromPhotoLibraryEnabled : 1; unsigned char isOwner : 1; unsigned char isSharingFaceClassificationsEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasIsSharingFaceClassificationsEnabled;
@property (nonatomic) BOOL isSharingFaceClassificationsEnabled;
@property (nonatomic) BOOL hasIsImportingFromPhotoLibraryEnabled;
@property (nonatomic) BOOL isImportingFromPhotoLibraryEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
