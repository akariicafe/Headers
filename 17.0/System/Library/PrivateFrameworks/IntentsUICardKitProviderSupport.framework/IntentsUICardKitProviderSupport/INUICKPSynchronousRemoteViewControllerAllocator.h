@class NSDictionary, INInteraction, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray, NSArray;
@protocol INUICKPViewControllerAllocatingDelegate;

@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating> {
    Class _synchronousRemoteViewControllerClass;
}

@property (readonly, nonatomic) NSMutableArray *mutableSynchronousRemoteViewControllers;
@property (retain, nonatomic) INInteraction *interaction;
@property (readonly, nonatomic) NSMutableArray *finalInterfaceSections;
@property (readonly, nonatomic) NSMutableSet *handledParameters;
@property (readonly, nonatomic) NSMutableDictionary *mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
@property (readonly, nonatomic) NSMutableArray *mutableRedundantInterfaceSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresUserConsent;
@property (readonly, copy, nonatomic) NSArray *allocatedViewControllers;
@property (readonly, copy, nonatomic) NSDictionary *viewControllersByInitialInterfaceSection;
@property (readonly, copy, nonatomic) NSArray *redundantInterfaceSections;
@property (weak, nonatomic) id<INUICKPViewControllerAllocatingDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)a0 completion:(id /* block */)a1;
- (void)_recursivelyConnectForInterfaceSectionQueue:(id)a0 recursionDepth:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_unhandledParametersForInterfaceSection:(id)a0;
- (double)boundingWidthForSynchronousRemoteViewController:(id)a0;
- (id)organizedInterfaceSections;
- (void)performAllocationsFromInteraction:(id)a0 initialInterfaceSections:(id)a1 completion:(id /* block */)a2;
- (void)setSynchronousRemoteViewControllerClass:(Class)a0;

@end
