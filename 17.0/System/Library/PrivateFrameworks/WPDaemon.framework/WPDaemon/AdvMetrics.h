@interface AdvMetrics : NSObject {
    unsigned long long totalAdvCount[27];
    unsigned long long totalDroppedAdvCount[27];
    unsigned long long droppedAdvCount[27][27];
}

- (unsigned long long)droppedAdvCountforType:(unsigned char)a0 by:(unsigned char)a1;
- (void)incrementDroppedAdvCountforType:(unsigned char)a0 by:(unsigned char)a1;
- (void)incrementTotalAdvCountforType:(unsigned char)a0;
- (void)incrementTotalDroppedAdvCountforType:(unsigned char)a0;
- (void)resetAllCounters;
- (unsigned long long)totalAdvCountforType:(unsigned char)a0;
- (unsigned long long)totalDroppedAdvCountforType:(unsigned char)a0;

@end
