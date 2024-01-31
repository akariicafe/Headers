@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)init;
- (void)start;
- (id)initWithProcessInfo:(id)a0;
- (void)stop;
- (void).cxx_destruct;

@end
