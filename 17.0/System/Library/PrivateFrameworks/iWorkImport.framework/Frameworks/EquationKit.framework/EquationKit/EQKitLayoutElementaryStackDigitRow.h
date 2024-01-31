@class NSString, NSArray;

@interface EQKitLayoutElementaryStackDigitRow : NSObject <EQKitLayoutElementaryStackRow> {
    NSArray *mColumnBoxes;
}

@property (readonly, nonatomic) long long alignmentShift;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL spansStack;
@property (readonly, nonatomic) double followingSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithChildren:(id)a0 decimalPoint:(unsigned long long)a1 position:(long long)a2 followingSpace:(double)a3;
- (id)newBoxWithStackWidth:(double)a0 columnWidthIter:(struct __wrap_iter<double *> { double *x0; })a1 iterMax:(struct __wrap_iter<double *> { double *x0; })a2 previousRow:(id)a3 layoutManager:(const void *)a4;
- (id)p_crossoutDigitBox:(id)a0 crossout:(int)a1 layoutManager:(const void *)a2;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x0; })a0;

@end
