@interface CStat : PBCodable <NSCopying> {
    struct { unsigned char activeDurMs : 1; unsigned char ident : 1; unsigned char idleDurMs : 1; unsigned char sleepDurMs : 1; unsigned char sleepEntryCount : 1; } _has;
}

@property (nonatomic) BOOL hasIdent;
@property (nonatomic) unsigned int ident;
@property (nonatomic) BOOL hasSleepDurMs;
@property (nonatomic) unsigned int sleepDurMs;
@property (nonatomic) BOOL hasIdleDurMs;
@property (nonatomic) unsigned int idleDurMs;
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) BOOL hasSleepEntryCount;
@property (nonatomic) unsigned int sleepEntryCount;

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
