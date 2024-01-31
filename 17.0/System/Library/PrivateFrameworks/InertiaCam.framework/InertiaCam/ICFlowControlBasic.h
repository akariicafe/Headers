@interface ICFlowControlBasic : NSObject <ICFlowControl>

@property (copy, nonatomic) id /* block */ shouldBeCanceled;
@property (copy, nonatomic) id /* block */ reportProgress;

- (void).cxx_destruct;
- (void)ICReportProgress:(float)a0;
- (BOOL)ICShouldBeCanceled;
- (id)initWithProgress:(id /* block */)a0;
- (id)initWithCancel:(id /* block */)a0;

@end
