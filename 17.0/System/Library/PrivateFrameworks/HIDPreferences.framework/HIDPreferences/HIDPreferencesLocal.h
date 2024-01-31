@class NSString;

@interface HIDPreferencesLocal : NSObject <HIDPreferencesProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copy:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (void)copyDomain:(id)a0 domain:(id)a1 reply:(id /* block */)a2;
- (void)copyMultiple:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (void)set:(id)a0 value:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)setDomain:(id)a0 value:(id)a1 domain:(id)a2;
- (void)setMultiple:(id)a0 keysToRemove:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)synchronize:(id)a0 host:(id)a1 domain:(id)a2;

@end
