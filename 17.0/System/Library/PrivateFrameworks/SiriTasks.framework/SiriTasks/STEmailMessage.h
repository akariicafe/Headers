@class NSString, NSArray, NSURL, STPerson;

@interface STEmailMessage : STSiriModelObject

@property (copy, nonatomic) NSString *messageBody;
@property (retain, nonatomic) NSURL *messageIdentifier;
@property (retain, nonatomic) STPerson *sender;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSArray *ccRecipients;
@property (retain, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSArray *receivingAddresses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (id)_personAttributesForRecipients:(id)a0;

@end
