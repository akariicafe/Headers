@class NSString, NSData;

@interface IDSQRProtoPluginControlRequest : PBRequest <NSCopying> {
    struct { unsigned char pluginStreamId : 1; } _has;
}

@property (nonatomic) unsigned int pluginOperation;
@property (retain, nonatomic) NSString *pluginName;
@property (nonatomic) BOOL hasPluginStreamId;
@property (nonatomic) unsigned int pluginStreamId;
@property (readonly, nonatomic) BOOL hasPluginClientRawPublicKey;
@property (retain, nonatomic) NSData *pluginClientRawPublicKey;

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
