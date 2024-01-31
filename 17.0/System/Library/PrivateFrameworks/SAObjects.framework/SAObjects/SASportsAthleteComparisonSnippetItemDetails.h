@class SAUIAppPunchOut, SASportsMetadata, NSString;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SASportsMetadata *metadata;
@property (retain, nonatomic) SAUIAppPunchOut *providerPunchOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)athleteComparisonSnippetItemDetails;
+ (id)athleteComparisonSnippetItemDetailsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
