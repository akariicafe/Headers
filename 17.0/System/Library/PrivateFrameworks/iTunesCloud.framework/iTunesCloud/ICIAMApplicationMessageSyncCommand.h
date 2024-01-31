@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; unsigned char commandType : 1; } _has;
}

@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) int commandType;
@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (retain, nonatomic) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

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
- (int)StringAsCommandType:(id)a0;
- (id)commandTypeAsString:(int)a0;

@end
