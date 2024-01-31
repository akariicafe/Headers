@class NSString, NSDictionary, NSData, NSDate;

@interface DCCredentialPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long protectionType;
@property (retain, nonatomic) NSString *docType;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *validFrom;
@property (retain, nonatomic) NSDate *validUntil;
@property (retain, nonatomic) NSDictionary *elementIdentifiersByNamespace;
@property (retain, nonatomic) NSData *payloadData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
