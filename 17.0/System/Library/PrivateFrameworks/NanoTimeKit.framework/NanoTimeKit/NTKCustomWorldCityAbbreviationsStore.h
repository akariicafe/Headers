@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (id)_getCustomAbbreviationsFromPrefs;
- (id)customAbbreviations;
- (void)setCustomAbbreviation:(id)a0 forCityIdentifier:(id)a1;

@end
