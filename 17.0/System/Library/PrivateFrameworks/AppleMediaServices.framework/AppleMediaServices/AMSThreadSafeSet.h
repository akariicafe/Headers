@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeSet : NSObject

@property (retain, nonatomic) AMSThreadSafeObject *backingSet;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;

@end
