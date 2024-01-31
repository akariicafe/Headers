@class NSString;

@interface CUDashboardClient : NSObject

@property (copy, nonatomic) NSString *server;

- (void)invalidate;
- (int)activate;
- (void).cxx_destruct;
- (int)_logCStr:(const char *)a0 length:(unsigned long long)a1;
- (int)logJSON:(id)a0;
- (int)logf:(const char *)a0;
- (int)logv:(const char *)a0 args:(char *)a1;

@end
