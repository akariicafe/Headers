@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char multipleBuiltInDevices : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoutingContextUID;
@property (retain, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL hasMultipleBuiltInDevices;
@property (nonatomic) BOOL multipleBuiltInDevices;

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
