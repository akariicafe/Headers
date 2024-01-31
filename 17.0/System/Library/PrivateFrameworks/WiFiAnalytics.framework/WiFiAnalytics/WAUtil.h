@interface WAUtil : NSObject

+ (BOOL)isPreinstalledWiFiAppVisible;
+ (BOOL)isWiFiAppInstalled;
+ (id)unobscureModelData:(id)a0 forModelkey:(id)a1;
+ (id)deviceName;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)_getBasePersistenceKeychainQuery;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (id)trimTokenForLogging:(id)a0;
+ (BOOL)isWildcardMacAddress:(id)a0;
+ (unsigned long long)getAWDTimestamp;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)groupTypeToString:(long long)a0;
+ (BOOL)isMacAddress:(id)a0;
+ (id)rotateObscureKey;
+ (id)getObscureKey;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)getTokenForIdentifier:(id)a0;

@end
