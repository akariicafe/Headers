@class NSString, NSMutableDictionary;

@interface IATextInputActionsAccumulator : NSObject {
    NSString *kUnknownBundleId;
    long long _netCharacters[11];
    long long _userRemovedCharacters[11];
    long long _netEmojiCharacters[11];
    long long _userRemovedEmojiCharacters[11];
    long long _inputActions[11];
    NSMutableDictionary *_entries;
    NSString *_language;
    NSString *_region;
    NSString *_keyboardVariant;
    NSString *_keyboardLayout;
    NSString *_keyboardType;
    BOOL _sessionIsModeless;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (id)getOrInitializeArrayFromDictionary:(id)a0 forKey:(id)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;
+ (id)accumulatorWithName:(id)a0;
+ (id)getOrInitializeArrayFromArray:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;

- (void)reset;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (void).cxx_destruct;
- (id)computeSessionActionsStringOnSession:(id)a0;
- (void)increaseCountForAppBundleId:(id)a0 forSource:(long long)a1 forActionType:(long long)a2 forFlagOptions:(long long)a3 forInputModeKey:(id)a4 byAccumulatorEntry:(id)a5;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)consumeAction:(id)a0;
- (void)enumerateTextInputActionsAnalytics;

@end
