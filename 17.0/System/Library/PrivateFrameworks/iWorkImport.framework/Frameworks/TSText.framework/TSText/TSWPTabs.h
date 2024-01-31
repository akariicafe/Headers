@class NSMutableArray;

@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing> {
    NSMutableArray *_tabs;
}

+ (id)tabs;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)tabAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertTab:(id)a0;
- (unsigned long long)indexForTabWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTabs:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)removeTabAtIndex:(unsigned long long)a0;
- (void)setPosition:(double)a0 forTab:(id)a1;
- (id)tabAfterPosition:(double)a0;
- (id)tabAtPosition:(double)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
