@class OspreyKeychain;

@interface OspreyPreferences : NSObject {
    OspreyKeychain *_keychain;
}

- (void).cxx_destruct;
- (void)synchronize;
- (id)connections;
- (id)connectionPreferencesForHost:(id)a0;
- (void)deleteConnectionPreferencesForHost:(id)a0;
- (id)initWithKeychain:(id)a0;
- (void)setConnectionPreferences:(id)a0;

@end
