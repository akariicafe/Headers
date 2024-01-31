@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoute;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
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
