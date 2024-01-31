@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {
    NSConcreteMapTable *mapTable;
    unsigned long long counter;
}

+ (id)enumeratorWithMapTable:(id)a0;

- (void)dealloc;
- (id)nextObject;

@end
