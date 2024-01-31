@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse

@property (copy) NSNumber *accountID;
@property BOOL askToBuyEnabled;
@property (copy) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
