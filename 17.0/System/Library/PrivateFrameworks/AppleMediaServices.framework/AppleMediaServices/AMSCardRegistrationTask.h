@class NSString;

@interface AMSCardRegistrationTask : AMSTask

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_performCardRegistration;
- (id)initWithCountryCode:(id)a0 merchantIdentifier:(id)a1;
- (id)performCardRegistration;

@end
