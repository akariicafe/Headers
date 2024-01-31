@class NSString;

@interface FBKIssueType : FBKManagedFeedbackObject

@property (retain) NSString *displayName;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
