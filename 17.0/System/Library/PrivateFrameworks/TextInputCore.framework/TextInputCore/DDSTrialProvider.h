@class NSString;

@interface DDSTrialProvider : NSObject <DDSTrialProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpTrialForQuery:(id)a0;
- (void)registerDelegate:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)fetchTrialAssetForQuery:(id)a0 callback:(id /* block */)a1;

@end
