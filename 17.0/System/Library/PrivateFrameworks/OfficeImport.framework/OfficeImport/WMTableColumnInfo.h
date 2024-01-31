@class NSMutableArray;

@interface WMTableColumnInfo : NSObject {
    NSMutableArray *mStopArray;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (void)mergeStopArray:(id)a0;
- (float)stopAt:(unsigned int)a0;
- (unsigned int)columnSpan:(float)a0 at:(unsigned int)a1;
- (id)initWithStopArray:(id)a0;

@end
