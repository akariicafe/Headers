@class NSUUID, _OSDataProtectionManager;

@interface _OSDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _OSDataProtectionManager *manager;
@property (readonly, nonatomic) NSUUID *handlerUUID;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)dataProtectionClassC;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassD;

- (id)init;
- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (BOOL)unnotifiedIsDataAvailableForClassC;

@end
