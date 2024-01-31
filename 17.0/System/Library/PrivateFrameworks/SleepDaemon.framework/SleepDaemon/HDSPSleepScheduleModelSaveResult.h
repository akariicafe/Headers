@class NSError, HDSPSleepScheduleModelChangeEvaluation;

@interface HDSPSleepScheduleModelSaveResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldNotify;

+ (id)emptyResult;
+ (id)saveFailedWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 changeEvaluation:(id)a1 error:(id)a2 shouldNotify:(BOOL)a3;

@end
