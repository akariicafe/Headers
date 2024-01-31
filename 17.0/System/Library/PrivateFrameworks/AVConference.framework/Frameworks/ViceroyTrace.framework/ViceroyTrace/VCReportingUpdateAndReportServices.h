@interface VCReportingUpdateAndReportServices : NSObject

@property (readonly) BOOL needToUpdate;
@property (readonly) BOOL needToReport;
@property (copy) id /* block */ block;

- (void)dealloc;
- (id)initWithServiceBlock:(id /* block */)a0 needToUpdate:(BOOL)a1 needToReport:(BOOL)a2;

@end
