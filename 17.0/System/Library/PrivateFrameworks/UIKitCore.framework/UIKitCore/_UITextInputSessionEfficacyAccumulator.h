@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface _UITextInputSessionEfficacyAccumulator : NSObject {
    NSMutableDictionary *_entries;
    NSString *_language;
    NSString *_region;
    NSString *_keyboardVariant;
    NSString *_keyboardLayout;
    NSString *_keyboardType;
    BOOL _sessionIsModeless;
    NSMutableSet *_sessionErrors;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (id)getOrInitializeArrayFromDictionary:(id)a0 forKey:(id)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;
+ (id)accumulatorWithName:(id)a0;
+ (id)getOrInitializeArrayFromArray:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;

- (id)init;
- (void)reset;
- (void)logErrorCodeIfNotNil:(id)a0;
- (BOOL)isPrimaryInput:(long long)a0;
- (void)increaseWithAction:(id)a0;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (id)cleanIdForPublishing:(id)a0;
- (id)generateSessionErrorStringFromSet:(id)a0;
- (void).cxx_destruct;
- (id)computeSessionActionsStringOnSession:(id)a0;
- (void)increaseCountForAppBundleId:(id)a0 forSource:(long long)a1 forActionType:(long long)a2 forFlagOptions:(long long)a3 forInputModeKey:(id)a4 byAccumulatorEntry:(id)a5;

@end
