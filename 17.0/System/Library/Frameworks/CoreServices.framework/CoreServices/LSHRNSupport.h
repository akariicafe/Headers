@interface LSHRNSupport : NSObject

+ (void)invalidateCache;
+ (void)setActivationRecordOverrideNil;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;
+ (BOOL)deviceConfiguredForHRN;
+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (void)setActivationRecordOverride:(BOOL)a0;

@end
