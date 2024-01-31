@class NSString, _MRRequestDetailsProtobuf;

@interface _MRSetVolumeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char volume : 1; } _has;
}

@property (nonatomic) BOOL hasVolume;
@property (nonatomic) float volume;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) _MRRequestDetailsProtobuf *details;

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
