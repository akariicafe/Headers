@class NSArray, NSString, NSURL, CLLocation, NSNumber;

@interface MADVIVisualSearchGatingRequest : MADRequest

@property (copy, nonatomic) NSNumber *queryID;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *referralURL;
@property (copy, nonatomic) NSNumber *imageType;
@property (copy, nonatomic) NSArray *domains;
@property (copy, nonatomic) NSString *featureIdentifier;
@property (copy, nonatomic) NSString *engagementSuggestionType;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
