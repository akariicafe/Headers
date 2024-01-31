@interface TSPMutableLargeObjectArraySegment : TSPAbstractMutableLargeArraySegment

- (Class)elementClass;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;
- (unsigned long long)estimatedCostOfElement:(id)a0;

@end
