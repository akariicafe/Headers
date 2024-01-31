@class NSString, NSMutableArray;

@interface TSKTreeNode : TSPObject {
    NSString *mDisplayName;
    id mObject;
    NSMutableArray *mChildren;
}

@property (retain, nonatomic) id dataObject;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSString *name;

- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithContext:(id)a0;
- (id)description;
- (id)nodeAtIndex:(unsigned long long)a0;
- (id)childEnumerator;
- (void)removeChildWithName:(id)a0;
- (id)shallowCopy;
- (void)removeAllChildren;
- (void)removeChildAtIndex:(unsigned long long)a0;
- (id)nodeWithObject:(id)a0;
- (void)addChildWithName:(id)a0 object:(id)a1;
- (void)addNode:(id)a0 atIndex:(unsigned long long)a1;
- (void)addObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateAllChildrenWithBlock:(id /* block */)a0;
- (BOOL)hasChildWithName:(id)a0;
- (long long)indexOfNodeWithObject:(id)a0;
- (void)removeChildWithDataObject:(id)a0;

@end
