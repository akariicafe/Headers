@class NSString, NSArray;

@interface TranslationUI.LanguagesServiceBridge : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ models;
}

@property (class, nonatomic, readonly) NSString *modelsKeyPath;

@property (nonatomic, copy) NSArray *models;

- (id)init;
- (void).cxx_destruct;
- (id)modelForLocale:(id)a0;
- (void)deleteLocale:(id)a0;
- (void)downloadLocales:(id)a0;

@end
