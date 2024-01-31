@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_homeScreenPath;
    NSString *_ambientPath;
}

+ (id)sharedInstance;

- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_readUpdateFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)_readHomeScreenUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (void)_logFetchedOnboardingStack:(id)a0;
- (id)initWithHomeScreenPath:(id)a0 ambientPath:(id)a1;
- (void)_writeUpdate:(id)a0 atPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)fetchWidgetDiscoverabilityStacks;
- (id)_JSONCompatible:(id)a0;
- (void).cxx_destruct;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_readAmbientUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (id)_generateOnboardingStacksForVariant:(unsigned long long)a0;
- (void)writeAmbientUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_doesBiomeAppLaunchDataGoBackAtLeast20Days;

@end
