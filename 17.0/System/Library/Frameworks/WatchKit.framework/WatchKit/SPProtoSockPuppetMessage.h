@class SPProtoSockPuppetPlist, SPProtoAudioFilePlayerMessage;

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlist;
@property (retain, nonatomic) SPProtoSockPuppetPlist *plist;
@property (readonly, nonatomic) BOOL hasAudioFilePlayerMessage;
@property (retain, nonatomic) SPProtoAudioFilePlayerMessage *audioFilePlayerMessage;

+ (id)sockPuppetMessageWithSubMessage:(id)a0 setterSelector:(SEL)a1;

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
