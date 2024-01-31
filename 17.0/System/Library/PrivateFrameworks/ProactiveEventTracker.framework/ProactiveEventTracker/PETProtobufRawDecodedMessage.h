@class NSDictionary, NSMutableDictionary;

@interface PETProtobufRawDecodedMessage : PBCodable {
    NSMutableDictionary *_decodedDict;
    NSDictionary *_nestedFields;
}

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)a0 nestedFields:(id)a1;

@end
