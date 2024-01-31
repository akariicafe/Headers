@class NSNumber, NSSet;

@interface FBKIssueDefinition : FBKManagedFeedbackObject

@property (retain) NSNumber *issueTypeID;
@property (retain) NSNumber *issueAreaID;
@property (retain) NSSet *fileMatchers;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
