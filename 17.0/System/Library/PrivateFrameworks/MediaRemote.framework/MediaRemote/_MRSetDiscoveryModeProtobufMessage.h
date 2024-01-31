@class _MRDiscoverySessionConfigurationProtobuf;

@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {
    struct { unsigned char features : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasFeatures;
@property (nonatomic) int features;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)modeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeatures:(id)a0;
- (id)featuresAsString:(int)a0;

@end
