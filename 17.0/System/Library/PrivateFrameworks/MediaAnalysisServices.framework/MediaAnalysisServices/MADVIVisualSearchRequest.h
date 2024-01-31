@class NSArray, NSString, NSData, CLLocation, NSNumber, NSURL;

@interface MADVIVisualSearchRequest : MADRequest {
    NSArray *_gatingResultItems;
    NSData *_gatingPayload;
    NSArray *_documentObservations;
}

@property (readonly, nonatomic) NSArray *gatingResultItems;
@property (readonly, nonatomic) NSData *gatingPayload;
@property (readonly, nonatomic) NSArray *documentObservations;
@property (copy, nonatomic) NSNumber *queryID;
@property (copy, nonatomic) NSNumber *uiScale;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *referralURL;
@property (copy, nonatomic) NSNumber *imageType;
@property (copy, nonatomic) NSArray *catalogIDs;
@property (copy, nonatomic) NSString *featureIdentifier;
@property (copy, nonatomic) NSString *engagementSuggestionType;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGatingResultItems:(id)a0 payload:(id)a1 documentObservations:(id)a2;
- (id)initWithGatingResultItems:(id)a0 andPayload:(id)a1;

@end
