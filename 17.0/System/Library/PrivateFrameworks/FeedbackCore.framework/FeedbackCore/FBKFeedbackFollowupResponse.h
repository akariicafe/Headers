@class NSString, FBKFeedbackFollowup, NSDate, NSNumber;

@interface FBKFeedbackFollowupResponse : FBKManagedFeedbackObject

@property (retain, nonatomic) NSNumber *primitiveType;
@property unsigned long long type;
@property (retain) NSString *text;
@property (retain) NSDate *createdAt;
@property (retain) NSString *role;
@property (retain) FBKFeedbackFollowup *followup;

+ (id)entityName;
+ (unsigned long long)followupResponseTypeFromString:(id)a0;
+ (long long)sortValueOfFollowupResponseRole:(id)a0;

- (BOOL)isValidated;
- (BOOL)isValidationResponse;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
