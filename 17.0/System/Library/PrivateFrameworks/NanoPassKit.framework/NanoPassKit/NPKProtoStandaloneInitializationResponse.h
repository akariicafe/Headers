@class NSString, NPKProtoStandaloneResponseHeader, NPKProtoStandaloneError;

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedServerVersions;
}

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (readonly, nonatomic) unsigned long long supportedServerVersionsCount;
@property (readonly, nonatomic) int *supportedServerVersions;
@property (readonly, nonatomic) BOOL hasClientInfoHTTPHeader;
@property (retain, nonatomic) NSString *clientInfoHTTPHeader;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NPKProtoStandaloneError *error;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSupportedServerVersions:(id)a0;
- (int)supportedServerVersionsAtIndex:(unsigned long long)a0;
- (void)addSupportedServerVersions:(int)a0;
- (void)clearSupportedServerVersions;
- (void)setSupportedServerVersions:(int *)a0 count:(unsigned long long)a1;
- (id)supportedServerVersionsAsString:(int)a0;

@end
