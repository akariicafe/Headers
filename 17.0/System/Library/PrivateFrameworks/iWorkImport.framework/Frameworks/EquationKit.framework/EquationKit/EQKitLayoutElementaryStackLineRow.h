@class NSString;

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow> {
    double mThickness;
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

- (id)initWithLength:(unsigned long long)a0 thickness:(double)a1 position:(long long)a2 followingSpace:(double)a3;
- (id)newBoxWithStackWidth:(double)a0 columnWidthIter:(struct __wrap_iter<double *> { double *x0; })a1 iterMax:(struct __wrap_iter<double *> { double *x0; })a2 previousRow:(id)a3 layoutManager:(const void *)a4;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x0; })a0;

@end
