@class NSArray, NSMutableDictionary;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_countriesFromLocation;
    NSArray *_countriesFromNearbyCells;
    NSArray *_countriesFromServingCell;
    NSArray *_countriesFromWiFiAPs;
    NSArray *_localOnlyEstimates;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)sameCountryCodesInArrays:(id)a0 arr2:(id)a1;
+ (id)getCacheDirPathLegacy;
+ (void)createCacheAtPath:(id)a0;
+ (id)getCacheDirPath;
+ (id)loadCache:(BOOL)a0;
+ (id)loadCacheForUnitTest;
+ (id)loadCache;
+ (id)getUserPath:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)stringsFromRDEstimateArray:(id)a0;
+ (id)getCacheDirPathForUnitTest;
+ (id)sortPreferredOrder:(id)a0;

- (void)setCountriesFromLocationForUnitTest:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(BOOL)a1;
- (id)getLastKnownCombinedEstimate;
- (id)countryCodesForPriority:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)recompute:(BOOL)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setCountriesFromLocation:(id)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (id)description;
- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 localEstimates:(id)a4 combinedEstimate:(id)a5 lastKnownCombinedEstimate:(id)a6 peerEstimates:(id)a7;
- (BOOL)saveCache:(BOOL)a0;
- (void)recompute;
- (id)getLocalOnlyEstimates;
- (void).cxx_destruct;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (void)setCountryFromLocation:(id)a0;
- (id)getCombinedEstimate;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(BOOL)a1;
- (void)computeLocalCountryCode;
- (BOOL)saveCache;
- (id)initWithCoder:(id)a0;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromMCC:(id)a0;
- (BOOL)saveCacheForUnitTest;

@end
