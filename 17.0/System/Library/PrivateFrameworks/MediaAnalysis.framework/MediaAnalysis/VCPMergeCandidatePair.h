@class NSString;

@interface VCPMergeCandidatePair : NSObject {
    unsigned long long _hash;
}

@property (readonly) NSString *person1LocalIdentifier;
@property (readonly) NSString *person2LocalIdentifier;
@property (readonly) NSString *reason;

+ (id)mergeCandidatePairWithPerson:(id)a0 andPerson:(id)a1 reason:(id)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0 andPerson:(id)a1 reason:(id)a2;

@end
