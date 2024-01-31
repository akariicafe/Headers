@class NSSet;

@interface SiriTTSLanguages : NSObject

@property (class, nonatomic, readonly) NSSet *availableLanguages;

+ (id)fallbackLanguageFor:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
