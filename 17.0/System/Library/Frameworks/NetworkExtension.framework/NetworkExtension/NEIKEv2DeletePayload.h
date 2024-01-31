@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {
    unsigned long long _protocol;
    NSArray *_spis;
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
