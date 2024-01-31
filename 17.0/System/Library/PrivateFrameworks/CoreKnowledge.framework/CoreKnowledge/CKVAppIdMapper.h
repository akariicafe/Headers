@interface CKVAppIdMapper : NSObject

+ (id)_buildKnownIdentifierToUniversalOriginAppIdMap;
+ (id)_getAllKnownAppIds;
+ (id)_getKnownAppIdMap;
+ (id)convertToUnversalAppId:(id)a0;
+ (BOOL)isKnownAppId:(id)a0;

@end
