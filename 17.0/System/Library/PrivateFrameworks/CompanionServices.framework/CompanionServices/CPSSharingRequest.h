@class NSData, NSArray, NSString;

@interface CPSSharingRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *requestData;
@property (copy, nonatomic) NSArray *customSharingMethods;
@property (copy, nonatomic) NSString *customTitleText;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (long long)authType;
- (id)initWithCoder:(id)a0;

@end
