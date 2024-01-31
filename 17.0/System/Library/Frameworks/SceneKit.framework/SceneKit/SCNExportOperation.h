@interface SCNExportOperation : NSOperation

- (double)progress;
- (BOOL)canceled;
- (id)error;
- (BOOL)succeded;

@end
