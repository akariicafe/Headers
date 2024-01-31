@class NSString, NSSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKVLocalization : NSObject <NSSecureCoding> {
    NSString *_siriLanguageCode;
    NSSet *_dictationLanguageCodes;
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetResolved;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (long long)supportedLocaleFromLanguageCode:(id)a0;
+ (id)defaultLocalization;
+ (id)supportedLanguageCodeFromLocale:(id)a0;

- (long long)locateMorphunAssetForSiriLanguage:(id *)a0;
- (id)init;
- (id)allLanguageCodes;
- (void)encodeWithCoder:(id)a0;
- (void)refresh;
- (BOOL)isEqualToLocalization:(id)a0;
- (id)initWithSiriLanguageCode:(id)a0;
- (id)siriLanguageCode;
- (void).cxx_destruct;
- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1;
- (id)dictationLanguageCodes;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
