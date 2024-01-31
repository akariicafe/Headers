@class NSMutableDictionary;

@interface HFThreadCommissioner : NSObject

@property (readonly, nonatomic) NSMutableDictionary *activeCommissioningForSetupCode;

+ (id)sharedCommissioner;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAllCommissioning;
- (void)cancelCommissioningForSetupCode:(id)a0;
- (id)commissionAccessoryWithSetupCode:(id)a0 threadIdentifier:(id)a1 home:(id)a2;

@end
