@class TRICustomTargetingPredicateLanguage, TRICoreMLAssignmentLanguage, TRIUIAssignmentLanguage, TRIPlanOutAssignmentLanguage, TRINSExpressionAssignmentLanguage, TRIBackgroundMLTaskAssignmentLanguage, TRIRolloutAssignmentLanguage;

@interface TRIAssignment : TRIPBMessage

@property (readonly, nonatomic) int languageOneOfCase;
@property (retain, nonatomic) TRINSExpressionAssignmentLanguage *nsexpressionLanguage;
@property (retain, nonatomic) TRIUIAssignmentLanguage *uiLanguage;
@property (retain, nonatomic) TRICoreMLAssignmentLanguage *coremlLanguage;
@property (retain, nonatomic) TRIPlanOutAssignmentLanguage *planoutLanguage;
@property (retain, nonatomic) TRIRolloutAssignmentLanguage *rolloutLanguage;
@property (retain, nonatomic) TRICustomTargetingPredicateLanguage *customTargetingLanguage;
@property (retain, nonatomic) TRIBackgroundMLTaskAssignmentLanguage *backgroundMlTaskLanguage;

+ (id)descriptor;

@end
