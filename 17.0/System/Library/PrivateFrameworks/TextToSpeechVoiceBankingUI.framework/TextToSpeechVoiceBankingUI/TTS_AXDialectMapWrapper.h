@class NSString, AXDialectMap;

@interface TTS_AXDialectMapWrapper : NSObject

@property (retain, nonatomic) AXDialectMap *dialectMap;
@property (readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameInNativeLocale;
@property (readonly, nonatomic) NSString *localeNameInCurrentLocale;

- (void).cxx_destruct;
- (id)initWithDialectMap:(id)a0;

@end
