@class NSArray;

@interface _CNAggregateTask : CNTask

@property (readonly, nonatomic) NSArray *tasks;

- (id)run:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)cancel;
- (void)cancelSubtasks;
- (id)initWithName:(id)a0 tasks:(id)a1;
- (id)runSubtask:(id)a0 error:(id *)a1;

@end
