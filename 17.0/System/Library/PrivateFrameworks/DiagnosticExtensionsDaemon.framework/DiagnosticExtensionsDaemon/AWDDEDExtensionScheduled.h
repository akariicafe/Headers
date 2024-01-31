@class NSString;

@interface AWDDEDExtensionScheduled : PBCodable <NSCopying> {
    struct { unsigned char delay : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) unsigned long long delay;

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
