@class NSString;

@interface _MRAudioRouteProtobuf : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char spatializationEnabled : 1; unsigned char supportsSpatialization : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSupportsSpatialization;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) BOOL hasSpatializationEnabled;
@property (nonatomic) BOOL spatializationEnabled;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
