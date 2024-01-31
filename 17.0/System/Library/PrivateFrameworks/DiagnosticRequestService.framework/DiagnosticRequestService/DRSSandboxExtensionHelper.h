@class NSString;

@interface DRSSandboxExtensionHelper : NSObject

@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL didInit;
@property (readonly, nonatomic) NSString *logPath;

- (void)dealloc;
- (id)initWithSandboxExtensionToken:(id)a0 logPath:(id)a1 errorOut:(id *)a2;
- (void).cxx_destruct;

@end
