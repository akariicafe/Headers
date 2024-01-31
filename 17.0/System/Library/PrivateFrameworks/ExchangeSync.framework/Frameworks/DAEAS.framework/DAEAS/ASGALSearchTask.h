@interface ASGALSearchTask : ASSearchTask

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (void)performTask;
- (BOOL)processContext:(id)a0;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;

@end
