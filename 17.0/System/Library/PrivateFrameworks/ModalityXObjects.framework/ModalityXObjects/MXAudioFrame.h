@class NSString, NSMutableArray;

@interface MXAudioFrame : PBCodable <NSCopying> {
    struct { unsigned char lastFrame : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableArray *audios;
@property (nonatomic) BOOL hasLastFrame;
@property (nonatomic) BOOL lastFrame;

+ (Class)audioType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)audiosCount;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAudio:(id)a0;
- (id)audioAtIndex:(unsigned long long)a0;
- (void)clearAudios;

@end
