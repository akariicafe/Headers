@class NSString, NSDictionary;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    NSDictionary *_deviceInfoKeysToValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultContext;
+ (id)_allKeys;
+ (id)_keysToValueTypes;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_valueTypeForValue:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)deviceInfoFloatValueForKey:(id)a0;
- (long long)deviceInfoIntegerValueForKey:(id)a0;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)a0;
- (BOOL)_isDeviceInfoType:(long long)a0 appropriateForKey:(id)a1;
- (BOOL)_isDeviceInfoValue:(id)a0 appropriateForKey:(id)a1;
- (id)_rawDeviceInfoKeysToValues;
- (long long)_valueTypeForKey:(id)a0;
- (BOOL)deviceInfoBoolValueForKey:(id)a0;
- (id)deviceInfoStringValueForKey:(id)a0;
- (BOOL)hasDeviceInfoValueForKey:(id)a0;
- (id)initWithDeviceInfoValues:(id)a0;

@end
