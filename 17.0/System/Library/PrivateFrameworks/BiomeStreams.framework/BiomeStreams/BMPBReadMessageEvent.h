@class NSString;

@interface BMPBReadMessageEvent : PBCodable <NSCopying> {
    struct { unsigned char markedUnread : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (nonatomic) BOOL hasMarkedUnread;
@property (nonatomic) BOOL markedUnread;

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
