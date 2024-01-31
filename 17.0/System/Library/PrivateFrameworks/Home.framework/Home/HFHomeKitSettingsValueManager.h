@class NSSet, NSMutableDictionary, HMSettings;

@interface HFHomeKitSettingsValueManager : NSObject

@property (retain, nonatomic) HMSettings *settings;
@property (retain, nonatomic) NSMutableDictionary *transactionStacks;
@property (retain, nonatomic) NSSet *homeKitObjectIdentifiers;
@property (readonly, nonatomic) NSSet *pendingWrites;

- (void).cxx_destruct;
- (id)valueForSetting:(id)a0;
- (id)changeValueForSetting:(id)a0 toValue:(id)a1;
- (id)valueForSettingAtKeyPath:(id)a0;
- (void)_clearTransaction:(id)a0;
- (void)_executeNextPendingWriteForSetting:(id)a0;
- (id)_valueForSetting:(id)a0 logRead:(BOOL)a1;
- (id)changeValueForSetting:(id)a0 toValue:(id)a1 changeType:(unsigned long long)a2;
- (id)initWithSettings:(id)a0 homeKitObjectIdentifiers:(id)a1;

@end
