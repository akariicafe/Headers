@class NSString, NSData;

@interface NPKProtoHandleAppletStateChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasPassAppletState;
@property (retain, nonatomic) NSData *passAppletState;

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
