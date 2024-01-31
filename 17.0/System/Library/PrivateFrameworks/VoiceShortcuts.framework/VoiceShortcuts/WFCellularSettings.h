@interface WFCellularSettings : NSObject

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;

+ (id)defaultSettings;

- (id)init;
- (void)dealloc;
- (BOOL)cellularDataEnabledWithError:(id *)a0;

@end
