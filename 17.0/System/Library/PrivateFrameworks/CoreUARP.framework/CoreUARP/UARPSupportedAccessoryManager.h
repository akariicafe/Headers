@class NSSet, NSMutableSet, NSObject;
@protocol OS_os_log;

@interface UARPSupportedAccessoryManager : NSObject {
    NSMutableSet *_setOfAccessories;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSSet *setOfAccessories;

+ (id)defaultManager;

- (id)init;
- (void)addSupportedAccessoryByDictionary:(id)a0;
- (void)addSupportedAccessories:(id)a0;
- (void).cxx_destruct;
- (void)addSupportedAccessory:(id)a0;
- (void)addSupportedAccessoriesByURL:(id)a0;

@end
