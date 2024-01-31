@interface TSTCellDiffArraySegment : TSPAbstractMutableLargeArraySegment

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)componentReadVersion;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;

@end
