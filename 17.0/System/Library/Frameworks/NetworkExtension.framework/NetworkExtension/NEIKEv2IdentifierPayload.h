@class NEIKEv2Identifier, NEIKEv2IKESA;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
    NEIKEv2Identifier *_identifier;
    NEIKEv2IKESA *_ikeSA;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
