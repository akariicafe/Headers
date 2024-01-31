@class NSString, NSDateInterval;

@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable>

@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSDateInterval *validityInterval;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic, getter=isFullyPopulated) BOOL fullyPopulated;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)validityIntervalWithDictionary:(id)a0;

- (id)init;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserIdentifier:(id)a0 validityInterval:(id)a1 fingerprint:(id)a2;

@end
