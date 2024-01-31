@class NSData, NSString;

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse

@property (retain, nonatomic) NSData *termsData;
@property (copy, nonatomic) NSString *termsDataFileName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
