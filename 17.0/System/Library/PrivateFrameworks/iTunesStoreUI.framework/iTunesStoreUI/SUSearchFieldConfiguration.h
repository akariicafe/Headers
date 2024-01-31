@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {
    SUClientInterface *_clientInterface;
    struct __CFDictionary { } *_hintURLs;
    struct __CFDictionary { } *_searchURLs;
    double _widthLandscape;
    double _widthPortrait;
}

@property (readonly, nonatomic) NSString *cancelString;
@property (readonly, nonatomic, getter=isRootViewOnly) BOOL rootViewOnly;
@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) NSString *placeholderString;
@property (readonly, nonatomic) NSString *userDefaultsKey;
@property (readonly, nonatomic) double width;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithClientInterface:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadFromDictionary:(id)a0;
- (id)URLRequestPropertiesWithBaseURL:(id)a0 forNetworkType:(long long)a1;
- (id)_initWithClientInterface:(id)a0;
- (long long)_locationForString:(id)a0;
- (id)_newQueryStringDictionaryForNetworkType:(long long)a0;
- (struct __CFDictionary { } *)_newURLsDictionaryWithDictionary:(id)a0;
- (void)_setHintURLsFromDictionary:(id)a0;
- (void)_setSearchURLsFromDictionary:(id)a0;
- (id)_urlRequestPropertiesForURLBagKey:(id)a0 networkType:(long long)a1;
- (id)hintsURLRequestPropertiesForNetworkType:(long long)a0;
- (id)initWithDictionary:(id)a0 clientInterface:(id)a1;
- (id)searchURLRequestPropertiesForNetworkType:(long long)a0;
- (double)widthForOrientation:(long long)a0;

@end
