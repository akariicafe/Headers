@class FBKQuestion, FBKFormResponse, NSArray, NSNumber;

@interface FBKAnswer : FBKManagedFeedbackObject

@property (retain) NSNumber *primitiveOptedOut;
@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (retain, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) NSNumber *questionID;
@property (copy, nonatomic) NSArray *values;
@property (retain, nonatomic) id value;
@property (getter=isOptedOut) BOOL optedOut;
@property (nonatomic) BOOL resolved;
@property (readonly, nonatomic) BOOL isAnswered;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValue;
+ (id)_importByQuestionIDFromJSONArray:(id)a0 withFormResponseID:(id)a1 intoContext:(id)a2;
+ (unsigned long long)answerTypeFromString:(id)a0;
+ (id)emptyLocalAnswerForQuestion:(id)a0 inFormResponse:(id)a1;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
