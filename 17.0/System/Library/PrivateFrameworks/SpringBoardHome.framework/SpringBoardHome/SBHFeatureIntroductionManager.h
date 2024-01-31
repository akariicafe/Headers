@class NSString, NSMutableDictionary;

@interface SBHFeatureIntroductionManager : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_allFeatureIntroductionItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)featureIntroductionItemsSetAtLocation:(unsigned long long)a0;
- (void)removeAllFeatureIntroductionsAtLocations:(unsigned long long)a0;
- (id)featureIntroductionItemAtLocation:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void)addFeatureIntroductionItem:(id)a0 atLocations:(unsigned long long)a1;
- (void)removeFeatureIntroductionAtAllLocationsWithItem:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)featureLocationFromMask:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)featureIntroductionItemAtLocation:(unsigned long long)a0 withIdentifier:(id)a1;
- (id)succinctDescription;
- (void)removeFeatureIntroductionItem:(id)a0 atLocations:(unsigned long long)a1;
- (id)featureLocationKeyFromLocation:(unsigned long long)a0;

@end
