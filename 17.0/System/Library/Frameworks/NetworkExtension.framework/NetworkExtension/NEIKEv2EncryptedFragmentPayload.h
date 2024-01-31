@class NSData;

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    unsigned long long _nextPayload;
    NSData *_fragmentData;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
