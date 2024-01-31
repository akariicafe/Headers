@class NSArray, NSError, MRCommandResult, NSNumber;

@interface MPCAssistantSendCommandResult : NSObject

@property (readonly, nonatomic) NSArray *returnStatuses;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MRCommandResult *commandResult;
@property (copy, nonatomic) NSNumber *devicesControlled;

- (void).cxx_destruct;
- (id)initWithCommandResult:(id)a0 error:(id)a1;
- (id)initWithReturnStatuses:(id)a0 error:(id)a1;

@end
