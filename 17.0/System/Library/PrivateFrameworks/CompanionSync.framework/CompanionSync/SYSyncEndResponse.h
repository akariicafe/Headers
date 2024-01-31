@class SYMessageHeader, NSString, SYErrorInfo;

@interface SYSyncEndResponse : PBCodable <NSCopying> {
    struct { unsigned char errorResolution : 1; } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (nonatomic) BOOL hasErrorResolution;
@property (nonatomic) int errorResolution;

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
- (int)StringAsErrorResolution:(id)a0;
- (id)errorResolutionAsString:(int)a0;

@end
