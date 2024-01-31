@class NTKCompanionApricotComplicationManager;

@interface NTKApricotTritiumComplicationProvider : NSObject {
    NTKCompanionApricotComplicationManager *_companionManager;
}

@property (class, readonly, nonatomic) NTKApricotTritiumComplicationProvider *shared;

- (id)_init;
- (void).cxx_destruct;
- (BOOL)vendorExistsWithContainerBundleIdentifier:(id)a0;

@end
