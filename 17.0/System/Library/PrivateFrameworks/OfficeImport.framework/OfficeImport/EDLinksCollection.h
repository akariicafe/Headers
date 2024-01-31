@class NSMutableArray;

@interface EDLinksCollection : NSObject {
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}

- (id)init;
- (unsigned long long)addLink:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)linksCount;
- (unsigned long long)referencesCount;
- (unsigned long long)addReference:(id)a0;
- (id)referenceAtIndex:(unsigned long long)a0;
- (void)addOrEquivalentExternalAddInName:(id)a0 linkReferenceIndex:(unsigned long long *)a1 nameIndex:(unsigned long long *)a2;
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)a0 lastSheetIndex:(unsigned long long)a1;
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;
- (BOOL)convertLinkReferenceIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long *)a1 lastSheetIndex:(unsigned long long *)a2;
- (unsigned long long)indexOfFirstLinkWithType:(int)a0;
- (unsigned long long)indexOfReference:(id)a0;
- (id)linkAtIndex:(unsigned long long)a0;
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)a0;

@end
