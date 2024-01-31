@class NSArray;

@interface SKTaskExecuter : NSObject <SKWaitable>

@property (readonly) NSArray *tasks;

- (void).cxx_destruct;
- (id)initWithTasks:(id)a0;
- (BOOL)waitWithError:(id *)a0;

@end
