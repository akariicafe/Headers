@class NSString, NSMutableSet;
@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject {
    NSMutableSet *_allChildren;
}

@property (nonatomic) int remotePid;
@property (nonatomic) unsigned int contextId;
@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) id /* block */ contextRetrieval;
@property (copy, nonatomic) id /* block */ pidRetrieval;
@property (readonly, nonatomic) unsigned long long uuidHash;
@property (readonly, nonatomic) unsigned int localHostingWindowContextId;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) BOOL onClientSide;
@property (weak, nonatomic) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;
@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) BOOL deniesDirectAppConnection;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerAccessibilityFrame;

+ (void)initialize;
+ (BOOL)_isSerializableAccessibilityElement;
+ (BOOL)registerRemoteElement:(id)a0 remotePort:(unsigned int)a1;
+ (id)registeredRemoteElements;
+ (id)remoteElementForBlock:(id /* block */)a0;
+ (id)remoteElementsForBlock:(id /* block */)a0;
+ (id)remoteElementsForContextId:(unsigned int)a0;

- (void)unregister;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_accessibilityAutomationType;
- (void)platformCleanup;
- (id)_accessibilityActiveKeyboard;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityFirstElement;
- (id)_accessibilityHandwritingElement;
- (BOOL)_accessibilityHasVisibleFrame;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (BOOL)_accessibilityIsGroupedParent;
- (id)_accessibilityResponderElement;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (BOOL)_accessibilitySetNativeFocus;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)getLeafElementsFromRemoteSide:(id /* block */)a0;
- (id)_accessibilityLastElement;
- (void)_getRemoteValuesOffMainThread:(id /* block */)a0;
- (id)_remoteElementWithAttribute:(long long)a0 limitToRemoteSubviews:(BOOL)a1;
- (id)initWithUUID:(id)a0 andRemotePid:(int)a1 andContextId:(unsigned int)a2;

@end
