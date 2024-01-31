@class NSDictionary;

@interface ACMBaseLocale : NSObject

@property (retain, nonatomic) ACMBaseLocale *nextLocale;
@property (retain, nonatomic) NSDictionary *localeStrings;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)localizedString:(id)a0;
+ (id)createLocaleForIdentifier:(id)a0;
+ (void)setupRecoveringPreferredLanguages;
+ (void)setupUsingPreferredLanguages;

- (void)dealloc;
- (id)objectForKey:(id)a0;

@end
