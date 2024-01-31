@class NSMutableArray;

@interface TRICoreMLAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *ruleArray;
@property (readonly, nonatomic) unsigned long long ruleArray_Count;

+ (id)descriptor;

@end
