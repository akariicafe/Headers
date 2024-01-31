@class NSArray, NEIKEv2IKESPI;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload {
    NSArray *_proposals;
    NEIKEv2IKESPI *_rekeyIKESPI;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
