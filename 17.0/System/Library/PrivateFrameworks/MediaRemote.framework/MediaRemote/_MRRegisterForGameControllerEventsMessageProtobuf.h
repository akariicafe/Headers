@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char inputModeFlags : 1; } _has;
}

@property (nonatomic) BOOL hasInputModeFlags;
@property (nonatomic) int inputModeFlags;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsInputModeFlags:(id)a0;
- (id)inputModeFlagsAsString:(int)a0;

@end
