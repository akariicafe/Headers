@class NSString, MNObserverHashTable, MNUserOptions;

@interface MNUserOptionsEngine : NSObject {
    MNObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0;
- (void)update:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)updateNavigationSessionLanguage:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
