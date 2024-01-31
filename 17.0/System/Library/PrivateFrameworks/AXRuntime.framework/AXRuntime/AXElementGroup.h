@class NSString, NSArray, NSHashTable, AXElement;
@protocol AXElementGroupGenerator;

@interface AXElementGroup : NSArray <AXGroupable> {
    NSArray *_elementStore;
}

@property (weak, nonatomic) id<AXElementGroupGenerator> generator;
@property (retain, nonatomic) NSHashTable *groupObservers;
@property (nonatomic) unsigned long long groupTraits;
@property (nonatomic, getter=isRootGroup) BOOL rootGroup;
@property (retain, nonatomic) AXElement *elementCommunity;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL canBeGroupedWithOtherGroupables;
@property (readonly, nonatomic) BOOL canBeReplacedByChildren;
@property (readonly, nonatomic) BOOL allowsChangingExistingGroupingOfContents;
@property (readonly, nonatomic) BOOL shouldBeUngrouped;
@property (readonly, nonatomic) BOOL allowsVisualGroupingOfChildren;
@property (readonly, nonatomic) unsigned long long numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup;
@property (nonatomic) unsigned long long userDefinedScanningBehaviorTraits;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupWithElements:(id)a0;
+ (id)groupWithElements:(id)a0 label:(id)a1;
+ (id)groupWithGenerator:(id)a0;

- (BOOL)isGroup;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGenerator:(id)a0;
- (id)firstChild;
- (id)lastChild;
- (id)ancestorPassingTest:(id /* block */)a0;
- (id)previousSiblingOfChild:(id)a0 didWrap:(BOOL *)a1;
- (void)_commonInitWithElements:(id)a0 label:(id)a1 generator:(id)a2;
- (id)_debugBriefDescription;
- (id)_debugDescriptionForScanningBehaviorTraits;
- (id)_debugDescriptionForTraits;
- (id)_debugFullDescriptionWithIndent:(id)a0;
- (void)_generateGroupsIfNeeded;
- (id)_leafAXElementWithPosition:(long long)a0;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)a0;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)a0;
- (id)_siblingOfChild:(id)a0 inDirection:(BOOL)a1 didWrap:(BOOL *)a2;
- (void)_transferStateToGroup:(id)a0;
- (id)bottomMostLeafAXElement;
- (id)childrenPassingTest:(id /* block */)a0;
- (BOOL)containsNativeFocusElement;
- (id)debugFullDescription;
- (id)descendantWithNativeFocus;
- (id)descendantsPassingTest:(id /* block */)a0;
- (void)enumerateLeafDescendantsUsingBlock:(id /* block */)a0;
- (id)firstChildMatchingItem:(id)a0;
- (id)firstChildPassingTest:(id /* block */)a0;
- (id)firstDescendantMatchingItem:(id)a0;
- (id)firstDescendantPassingTest:(id /* block */)a0;
- (id)firstLeafDescendant;
- (id)groupByAppendingGroupable:(id)a0;
- (id)groupByPrependingGroupable:(id)a0;
- (id)groupByRemovingGroupable:(id)a0;
- (id)groupByReplacingGroupable:(id)a0 withGroupable:(id)a1;
- (id)highestAncestorGroup;
- (id)initWithElements:(id)a0 label:(id)a1;
- (BOOL)isKeyboardContainer;
- (BOOL)isKeyboardRow;
- (id)keyboardContainer;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (id)leftMostLeafAXElement;
- (id)nextSiblingOfChild:(id)a0 didWrap:(BOOL *)a1;
- (void)registerGroupObserver:(id)a0;
- (id)rightMostLeafAXElement;
- (id)topMostLeafAXElement;
- (void)unregisterAllGroupObservers;
- (void)unregisterGroupObserver:(id)a0;

@end
