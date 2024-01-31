@class NSArray;

@interface REArrayDiff : NSObject

@property (readonly, nonatomic) NSArray *allOperations;

+ (id)diffFromElements:(id)a0 toElements:(id)a1 equalComparator:(id /* block */)a2 hashGenerator:(id /* block */)a3 changeComparator:(id /* block */)a4;
+ (id)_createSetFromElementArray:(id)a0 equalComparator:(id /* block */)a1 hashGenerator:(id /* block */)a2;
+ (id)_indexSetFromSet:(id)a0;
+ (id)diffFromElements:(id)a0 toElements:(id)a1;

- (void).cxx_destruct;
- (void)enumerateOperationsUsingBlock:(id /* block */)a0;

@end
