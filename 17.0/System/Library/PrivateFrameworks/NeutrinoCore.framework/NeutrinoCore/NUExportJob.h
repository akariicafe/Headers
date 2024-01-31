@interface NUExportJob : NURenderJob

- (id)result;
- (id)initWithRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (id)exportRequest;
- (id)initWithExportRequest:(id)a0;

@end
