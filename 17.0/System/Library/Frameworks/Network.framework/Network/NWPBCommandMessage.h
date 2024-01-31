@class NSData;

@interface NWPBCommandMessage : PBCodable <NSCopying> {
    struct { unsigned char command : 1; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData;

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
- (int)StringAsCommand:(id)a0;
- (id)commandAsString:(int)a0;

@end
