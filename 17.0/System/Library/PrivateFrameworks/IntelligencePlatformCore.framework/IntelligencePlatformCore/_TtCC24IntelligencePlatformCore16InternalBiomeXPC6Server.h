@class GDViewQuery, NSError, NSString;

@interface _TtCC24IntelligencePlatformCore16InternalBiomeXPC6Server : NSObject <GDInternalBiomeXPCProtocol>

- (id)init;
- (void)viewClearAllDataWithViewQuery:(GDViewQuery *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)viewDumpStateWithCompletion:(id /* block */)a0;
- (void)viewRunUpdateWithViewQuery:(GDViewQuery *)a0 forceRebuild:(BOOL)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)viewSetEnabledWithName:(NSString *)a0 enabled:(BOOL)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)viewValidateWithCompletion:(void (^)(BOOL, NSError *))a0;

@end
