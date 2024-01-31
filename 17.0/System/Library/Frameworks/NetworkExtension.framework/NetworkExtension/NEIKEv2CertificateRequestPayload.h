@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {
    unsigned long long _encoding;
    NSData *_certificateData;
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
