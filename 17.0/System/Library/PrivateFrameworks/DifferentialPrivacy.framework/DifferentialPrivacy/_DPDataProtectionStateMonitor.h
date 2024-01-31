@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) id /* block */ changeHandler;

+ (id)dataProtectionClassC;
+ (id)dataProtectionClassA;
+ (id)dataProtectionClassD;

- (id)init;
- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;

@end
