@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {
    BOOL _includeDHGroup;
    NSArray *_proposals;
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
