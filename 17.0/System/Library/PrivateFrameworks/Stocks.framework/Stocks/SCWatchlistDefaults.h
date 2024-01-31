@class NSArray;

@interface SCWatchlistDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultSymbols;

+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_defaultSymbolsByCountryCode;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)defaultsForCurrentCountry;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)defaultsWithDefaultSymbols:(id)a0;
+ (id)emptyDefaults;
+ (id)defaultsFromCarrierBundle;

- (void).cxx_destruct;
- (id)defaultsByAppendingDefaults:(id)a0;
- (id)initWithDefaultSymbols:(id)a0;

@end
