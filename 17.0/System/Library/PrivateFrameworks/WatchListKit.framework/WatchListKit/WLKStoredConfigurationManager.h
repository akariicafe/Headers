@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (void)_handleLibraryChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_setStoredConfiguration:(id)a0;
- (void)_invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (void)_handleAccountChange:(id)a0;
- (void)_updateConfiguration:(id)a0;

@end
