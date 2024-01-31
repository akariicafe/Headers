@class NSMutableArray, NSString, NSObject, CKContainer;
@protocol OS_dispatch_queue, WBSAppleAccountInformationProviding;

@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    BOOL _determiningManateeState;
    long long _currentState;
    id /* block */ _stateChangeObserver;
    NSMutableArray *_stateDeterminationCompletionBlocks;
    id<WBSAppleAccountInformationProviding> _appleAccountInformationProvider;
}

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) id /* block */ stateChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accountChanged:(id)a0;
- (void)determineManateeStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_determineManateeStateWithCompletion:(id /* block */)a0;
- (id)initWithContainerIdentifier:(id)a0 appleAccountInformationProvider:(id)a1;

@end
