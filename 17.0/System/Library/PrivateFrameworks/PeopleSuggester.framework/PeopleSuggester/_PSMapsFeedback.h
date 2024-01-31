@class _PSMapsPredictionContext, _PSMapsFeedbackAction, NSArray;

@interface _PSMapsFeedback : NSObject

@property (nonatomic) BOOL dryRun;
@property (readonly, nonatomic) _PSMapsFeedbackAction *action;
@property (readonly, nonatomic) _PSMapsPredictionContext *context;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) unsigned long long indexOfEngagedSuggestion;

- (void).cxx_destruct;
- (id)feedbackPayload;
- (id)getTrialID;
- (id)initWithFeedbackAction:(id)a0 predictionContext:(id)a1 suggestions:(id)a2;
- (id)knowledgeEvent;

@end
