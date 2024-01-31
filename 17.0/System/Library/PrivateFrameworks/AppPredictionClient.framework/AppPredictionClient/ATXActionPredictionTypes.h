@interface ATXActionPredictionTypes : NSObject

+ (id)actionExperienceToString:(unsigned long long)a0;
+ (id)actionFeedbackTypeToString:(unsigned long long)a0;
+ (id)inverseActionFeedbackTypeMapping;
+ (id)actionTypeToPETString:(unsigned long long)a0;
+ (unsigned long long)stringToActionExperience:(id)a0 found:(BOOL *)a1;
+ (id)engagementTypeToString:(unsigned long long)a0;
+ (id)actionFeedbackStageToString:(unsigned long long)a0;
+ (id)actionTypeToString:(unsigned long long)a0;
+ (unsigned long long)stringToActionFeedbackStage:(id)a0 found:(BOOL *)a1;

@end
