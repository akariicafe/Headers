@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject

@property (retain, nonatomic) FCPersistentDictionary *persistentDictionary;

- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)enqueueActionWithType:(long long)a0;
- (id)peekAtActionTypes;
- (BOOL)popActionTypesUpToCount:(unsigned long long)a0 setLocalDataHintIfNeeded:(BOOL)a1;
- (BOOL)readLocalDataHint;

@end
