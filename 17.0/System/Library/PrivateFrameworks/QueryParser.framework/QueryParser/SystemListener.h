@class NSArray, NSMutableDictionary, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface SystemListener : NSObject {
    BOOL _locked_hasUpdatedLocale;
    NSLocale *_locked_currentLocale;
    NSArray *_locked_currentPreferredLanguages;
    NSMutableDictionary *_locked_currentResources;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _autoUpdatingLocale;
}

@property (nonatomic) BOOL force;

+ (id)defaultListener;

- (id)currentLocale;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateLocale;
- (id)currentPreferredLanguages;
- (BOOL)hasUpdatedLocale;
- (BOOL)hasUpdatedResources;
- (void)loadLocale:(id)a0 preferredLanguages:(id)a1;
- (id)pathsForContentType:(id)a0 locale:(id)a1;
- (void)setAutoUpdatingLocale:(BOOL)a0;
- (void)updateLocaleWithLocale:(id)a0 preferredLanguages:(id)a1 forceLoad:(BOOL)a2;

@end
