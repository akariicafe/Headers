@class NSData;

@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

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
