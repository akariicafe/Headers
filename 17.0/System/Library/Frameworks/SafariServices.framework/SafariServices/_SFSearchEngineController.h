@class NSArray, NSString, NSDictionary, _SFSearchEngineInfo, NSObject;
@protocol OS_dispatch_queue, WBSSearchProvider;

@interface _SFSearchEngineController : NSObject <WBSSearchProviderContext> {
    NSArray *_searchEngines;
    unsigned long long _defaultSearchEngineIndex;
    NSObject<OS_dispatch_queue> *_searchEnginesQueue;
    _SFSearchEngineInfo *_defaultSearchEngine;
    unsigned long long _privateSearchEngineIndex;
    _SFSearchEngineInfo *_privateSearchEngine;
}

@property (readonly, copy, nonatomic) NSArray *engines;
@property (readonly, copy, nonatomic) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (readonly, copy, nonatomic) NSArray *searchEngineNames;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *systemLanguage;
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly, nonatomic) id<WBSSearchProvider> defaultSearchProvider;
@property (readonly, nonatomic) id<WBSSearchProvider> defaultSeachProviderForPrivateBrowsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
+ (BOOL)_deviceRegionCodeIsChina;
+ (void)_initializeSharedInstance;
+ (void)loadSystemLanguageProperties;

- (id)init;
- (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)defaultSearchEngineForPrivateBrowsing:(BOOL)a0;
- (void)_addAllWebSearchEngineInfosToArray:(id)a0 andAddUserVisibleWebSearchEngineInfosToArray:(id)a1;
- (id)_existingEngineInfoFor:(id)a0;
- (void)_getEngines:(id *)a0 defaultSearchEngineIndex:(unsigned long long *)a1 forPrivateBrowsing:(BOOL)a2;
- (void)_loadSystemPropertiesForSearchEngine:(id)a0;
- (void)_populateSearchEngines;
- (void)_postDefaultSearchEngineDidChange;
- (void)_setDefaultSearchEngine:(id)a0 forPrivateBrowsing:(BOOL)a1;
- (void)_setEngines:(id)a0 defaultSearchEngineIndex:(unsigned long long)a1 forPrivateBrowsing:(BOOL)a2;
- (id)_specialSearchEngines;
- (id)defaultSearchEngine;
- (id)defaultSearchEngineIfPopulatedForPrivateBrowsing:(BOOL)a0;
- (id)defaultSearchEngineNameForPrivateBrowsing:(BOOL)a0;
- (id)engineInfoFor:(id)a0;
- (id)engineInfoForScriptName:(id)a0;
- (void)reloadSearchEngines;
- (id)safeSearchRequestForSearchRequest:(id)a0;
- (void)setDefaultSearchEngine:(id)a0 forPrivateBrowsing:(BOOL)a1;

@end
