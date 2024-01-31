@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
