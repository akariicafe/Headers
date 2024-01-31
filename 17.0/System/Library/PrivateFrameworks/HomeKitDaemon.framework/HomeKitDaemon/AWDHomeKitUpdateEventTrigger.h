@interface AWDHomeKitUpdateEventTrigger : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char requestOrigin : 1; unsigned char resultErrorCode : 1; unsigned char updateType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) unsigned int resultErrorCode;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int updateType;
@property (nonatomic) BOOL hasRequestOrigin;
@property (nonatomic) int requestOrigin;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRequestOrigin:(id)a0;
- (int)StringAsUpdateType:(id)a0;
- (id)requestOriginAsString:(int)a0;
- (id)updateTypeAsString:(int)a0;

@end
