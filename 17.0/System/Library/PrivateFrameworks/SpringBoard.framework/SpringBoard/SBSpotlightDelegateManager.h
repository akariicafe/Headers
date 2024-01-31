@class NSString, NSMutableDictionary;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>

@property (class, readonly, nonatomic) SBSpotlightDelegateManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *delegatesForLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissSearchView;
- (void)removeSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;
- (void)searchViewKeyboardPresentationStateDidChange;
- (id)activeDelegate;
- (void).cxx_destruct;
- (void)_modifyDelegatesWithBlock:(id /* block */)a0;
- (void)searchViewContentAvailabilityDidChange;
- (void)addSpotlightDelegate:(id)a0 forLevel:(unsigned long long)a1;

@end
