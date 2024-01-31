@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (id)objectEnumerator;
- (id)member:(id)a0;
- (id)anyObject;
- (void)addObjectsFromArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;
- (id)allObjects;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
