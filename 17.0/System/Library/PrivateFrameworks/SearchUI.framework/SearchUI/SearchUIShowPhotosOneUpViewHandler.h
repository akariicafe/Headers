@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

+ (id)matchedPersonLocalIdentifiersForCommand:(id)a0;
+ (id)matchedSceneIdentifiersForCommand:(id)a0 andType:(int)a1;

- (unsigned long long)destination;
- (id)additionalActionMenuItems;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)itemProviderForCopy;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)supportsCopy;

@end
