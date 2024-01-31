@class NSDictionary, NTKBundleComplicationMigrationService, CLKDevice;

@interface NTKBundleComplicationMigrationTypeLookupGenerator : NSObject

+ (void)generateLookupUsingService:(NTKBundleComplicationMigrationService *)a0 device:(CLKDevice *)a1 completion:(void (^)(NSDictionary *))a2;

- (id)init;

@end
