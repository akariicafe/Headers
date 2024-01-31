@class NSArray;

@interface PXArrayDataSection : PXDataSection

@property (readonly, copy, nonatomic) NSArray *sectionContent;

- (long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (long long)count;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithOutlineObject:(id)a0;
- (id)initWithOutlineObject:(id)a0 sectionContent:(id)a1;
- (id)initWithSectionContent:(id)a0;
- (long long)validatedIndexOfObject:(id)a0 hintIndex:(long long)a1;

@end
