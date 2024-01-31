@class NSData, NPKProtoPassSyncState;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {
    struct { unsigned char unrecognizedReconciledStateVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUnrecognizedReconciledStateHash;
@property (retain, nonatomic) NSData *unrecognizedReconciledStateHash;
@property (readonly, nonatomic) BOOL hasLibraryPassSyncState;
@property (retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState;
@property (nonatomic) BOOL hasUnrecognizedReconciledStateVersion;
@property (nonatomic) unsigned int unrecognizedReconciledStateVersion;

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
