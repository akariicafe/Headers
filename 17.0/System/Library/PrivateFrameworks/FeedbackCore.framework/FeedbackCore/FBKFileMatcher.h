@class NSString, NSRegularExpression, NSSet;

@interface FBKFileMatcher : FBKManagedFeedbackObject

@property (retain) NSString *instructionsAsHTML;
@property (retain) NSString *name;
@property (retain) NSRegularExpression *regularExpression;
@property (retain) NSString *operationName;
@property (retain) NSString *deBundleIdentifier;
@property (retain) NSString *regularExpressionPattern;
@property (retain) NSString *platform;
@property (retain) NSSet *filePredicates;
@property (retain) NSSet *feedbackFollowups;
@property (retain, nonatomic) NSString *localizedDataCollectedSummary;
@property (retain, nonatomic) NSString *localizedDataCollectedExplanation;

+ (id)entityName;
+ (id)assetNameForFile:(id)a0;
+ (id)iconForFileName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasPlatform;
- (id)iconForRequirement;
- (BOOL)matchesFilename:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
