@class NSString;

@interface AWDCpuLoad : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProcName;
@property (retain, nonatomic) NSString *procName;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
