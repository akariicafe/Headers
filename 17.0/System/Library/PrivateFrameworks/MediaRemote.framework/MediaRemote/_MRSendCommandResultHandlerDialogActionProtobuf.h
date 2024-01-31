@class NSString, _MRSendCommandMessageProtobuf;

@interface _MRSendCommandResultHandlerDialogActionProtobuf : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) _MRSendCommandMessageProtobuf *event;

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
