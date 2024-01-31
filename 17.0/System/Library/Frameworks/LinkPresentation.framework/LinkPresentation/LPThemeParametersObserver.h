@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (void)didChangeDarkenColorsStatus:(id)a0;
- (void)didChangeThemeParameters;

@end
