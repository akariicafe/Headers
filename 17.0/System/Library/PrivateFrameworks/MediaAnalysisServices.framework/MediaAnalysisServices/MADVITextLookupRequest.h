@class NSString, NSNumber, NSArray;

@interface MADVITextLookupRequest : MADRequest

@property (readonly, copy, nonatomic) NSString *queryTerm;
@property (copy, nonatomic) NSNumber *queryID;
@property (copy, nonatomic) NSNumber *uiScale;
@property (copy, nonatomic) NSString *engagementSuggestionType;
@property (copy, nonatomic) NSString *hintDomain;
@property (copy, nonatomic) NSString *surroundingText;
@property (copy, nonatomic) NSArray *normalizedBoundingBoxes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithQueryTerm:(id)a0;
- (id)initWithQueryTerm:(id)a0 domain:(id)a1 textContext:(id)a2;

@end
