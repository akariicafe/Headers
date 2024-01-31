@class NSString;

@interface TNPageContentRep : TSDContainerRep <TSKChangeSourceObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOpaque;
- (Class)layerClass;
- (BOOL)masksToBounds;
- (id)pageController;
- (void)willBeRemoved;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;

@end
