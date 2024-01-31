@class NSString;

@interface FeedbackCore.FBKTargetedSurvey : NSObject {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ teamId;

+ (void)clearCachedUserSession;
+ (void)didFinishSubmissionWithFormIdentifier:(id)a0 feedbackId:(id)a1 isSurvey:(BOOL)a2 error:(id)a3;
+ (id)inboxTargetedSurveysWithTeamType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
