@interface TSTCellDiffArray : TSPAbstractMutableLargeArray

+ (Class)arraySegmentClass;

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)packageLocatorForSegments;

@end
