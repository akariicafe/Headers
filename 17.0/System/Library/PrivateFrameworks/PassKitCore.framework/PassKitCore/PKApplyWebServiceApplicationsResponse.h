@class NSArray, PKFeatureFailureCollection, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) NSArray *allFeatureApplications;
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
