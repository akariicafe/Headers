@class NSString, NSArray, NSURL, NSData;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *frontImageData;
@property (copy, nonatomic) NSData *backImageData;
@property (copy, nonatomic) NSData *uploadedDocumentData;
@property (copy, nonatomic) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSString *odiAssessment;
@property (nonatomic) long long channel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
