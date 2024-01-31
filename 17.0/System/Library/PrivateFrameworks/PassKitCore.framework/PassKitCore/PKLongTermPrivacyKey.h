@class NSString, NSData, NSDate;

@interface PKLongTermPrivacyKey : NSObject

@property (retain, nonatomic) NSString *keyIdentifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *groupIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSESPrivacyKey:(id)a0;

@end
