@class NSDate, NSString, NSArray, FBKBugForm, NSSet, FBKAnswer, FBKFeedback, FBKContentItem, NSNumber, FBKUploadTask;

@interface FBKFormResponse : FBKManagedFeedbackObject <FBKFilerForm>

@property (retain) NSNumber *primitiveCompleted;
@property (retain) NSArray *titleAnswers;
@property (readonly) FBKAnswer *titleAnswer;
@property (retain) NSArray *problemDescriptionAnswers;
@property (readonly) FBKAnswer *problemDescriptionAnswer;
@property (retain) NSArray *issueTypeAnswers;
@property (readonly) FBKAnswer *issueTypeAnswer;
@property (getter=isCompleted) BOOL completed;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *updatedAt;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSString *largeFilePrefix;
@property BOOL remote;
@property (retain) NSString *buildString;
@property BOOL isStub;
@property (retain, nonatomic) NSNumber *formID;
@property (retain, nonatomic) NSSet *draftDevices;
@property BOOL serverSideIsComplete;
@property (retain) NSNumber *feedbackID;
@property (readonly) NSNumber *followupCount;
@property (retain) NSString *extractedTitle;
@property (retain) NSString *extractedProblemDescription;
@property (retain) NSString *extractedIssueType;
@property (retain) NSNumber *extractedFollowupCount;
@property (readonly) NSString *title;
@property (readonly) NSString *problemDescription;
@property (readonly) NSString *issueType;
@property (retain) NSSet *answers;
@property (retain) NSSet *filePromises;
@property (retain) FBKFeedback *feedback;
@property (retain) FBKBugForm *bugForm;
@property (retain) FBKUploadTask *uploadTask;
@property (readonly) NSString *platform;
@property (nonatomic) long long filerFormType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingFollowupCount;
+ (id)keyPathsForValuesAffectingIssueType;
+ (id)keyPathsForValuesAffectingIssueTypeAnswer;
+ (id)keyPathsForValuesAffectingProblemDescription;
+ (id)keyPathsForValuesAffectingProblemDescriptionAnswer;
+ (id)keyPathsForValuesAffectingTitleAnswer;

- (void)prepareForDeletion;
- (BOOL)needsRefresh;
- (id)title;
- (id)issueType;
- (id)promises;
- (id)problemDescription;
- (id)answerForQuestion:(id)a0;
- (id)answerForQuestionID:(id)a0;
- (id)answersDictionary;
- (BOOL)collectsFiles;
- (BOOL)evaluateConditional:(id)a0;
- (id)fileMatchers;
- (id)filerFormID;
- (id)findAnswerForRole:(id)a0;
- (id)followupCount;
- (id)formPlatform;
- (BOOL)isAnswerExpectedForQuestion:(id)a0;
- (BOOL)isServerSideComplete;
- (id)matcherPredicates;
- (void)setPropertiesFromJSONObject:(id)a0;
- (void)setValue:(id)a0 forQuestionID:(id)a1;
- (void)updateExtractedValuesFromAnswers;
- (id)valueForQuestionID:(id)a0;
- (id)valuesForQuestionID:(id)a0;

@end
