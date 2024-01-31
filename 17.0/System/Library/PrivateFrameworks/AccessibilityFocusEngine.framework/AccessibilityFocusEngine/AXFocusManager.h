@class NSString, NSHashTable, NSObject, AXElement;
@protocol OS_dispatch_queue;

@interface AXFocusManager : NSObject

@property (retain, nonatomic) NSString *typeaheadString;
@property (retain, nonatomic) AXElement *focusContainerForSuccessfulTypeaheadMovement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movementQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observersQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (readonly, nonatomic) AXElement *currentApplication;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)_enumerateObservers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)currentFocusContainer;
- (id)_currentFocusContainers;
- (BOOL)_focusOnFocusContainer:(id)a0;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (unsigned long long)_indexOfTypeaheadPIDInFocusContainers:(id)a0;
- (id)_moveFocusContainerFocusInDirection:(long long)a0;
- (BOOL)_moveFocusInFocusContainer:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (BOOL)_moveFocusInRemoteElement:(id)a0 withHeading:(unsigned long long)a1 byGroup:(BOOL)a2;
- (void)_moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1 queryString:(id)a2 shouldWrap:(BOOL)a3;
- (BOOL)_moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1 shouldWrap:(BOOL)a2;
- (void)_moveToElementWithHeading:(unsigned long long)a0 queryString:(id)a1;
- (BOOL)_recursiveMoveFocusInFocusContainer:(id)a0 withHeading:(unsigned long long)a1 byGroup:(BOOL)a2;
- (BOOL)_recursiveMoveFocusInFocusContainer:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (void)_verifyPIDForTypeahead;
- (id)currentElement;
- (void)focusOnSceneForTypeahead;
- (void)moveFocusInsideForward:(BOOL)a0;
- (void)moveFocusInsideForward:(BOOL)a0 shouldWrap:(BOOL)a1;
- (void)moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (void)moveFocusWithHeading:(unsigned long long)a0 queryString:(id)a1;

@end
