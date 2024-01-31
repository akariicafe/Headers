@interface PStat : PBCodable <NSCopying> {
    struct { unsigned char activeDurMs : 1; unsigned char ident : 1; unsigned char inactiveDurMs : 1; unsigned char sleepBlockCount : 1; unsigned char toActiveCount : 1; } _has;
}

@property (nonatomic) BOOL hasIdent;
@property (nonatomic) unsigned int ident;
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) BOOL hasInactiveDurMs;
@property (nonatomic) unsigned int inactiveDurMs;
@property (nonatomic) BOOL hasToActiveCount;
@property (nonatomic) unsigned int toActiveCount;
@property (nonatomic) BOOL hasSleepBlockCount;
@property (nonatomic) unsigned int sleepBlockCount;

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
