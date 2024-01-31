@class _MRTextEditingAttributesProtobuf, NSData;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) BOOL hasAttributes;
@property (retain, nonatomic) _MRTextEditingAttributesProtobuf *attributes;
@property (readonly, nonatomic) BOOL hasEncryptedTextCyphertext;
@property (retain, nonatomic) NSData *encryptedTextCyphertext;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)stateAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsState:(id)a0;

@end
