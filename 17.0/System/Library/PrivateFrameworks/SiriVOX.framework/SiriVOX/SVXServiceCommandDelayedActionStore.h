@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}

- (id)init;
- (void)removeAllActions;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void)removeActionForKey:(id)a0;

@end
