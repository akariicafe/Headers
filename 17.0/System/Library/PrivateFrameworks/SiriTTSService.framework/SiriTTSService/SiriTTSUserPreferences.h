@class NSString;

@interface SiriTTSUserPreferences : NSObject

@property (class, nonatomic, readonly) NSString *spokenLanguageChangedNotification;

+ (id)defaultOutputLanguageIdentifier;
+ (id)getAvailableLanguageIdentifiers;
+ (BOOL)getLogging;
+ (id)getSpokenLanguageIdentifier;
+ (void)setLogging:(BOOL)a0;
+ (void)setSpokenLanguageIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
