@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {
    unsigned long long _customType;
    NSData *_customData;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
