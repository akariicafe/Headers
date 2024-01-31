@class NSData, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2AuthPayload : NEIKEv2Payload {
    NEIKEv2AuthenticationProtocol *_authProtocol;
    NSData *_authenticationData;
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
