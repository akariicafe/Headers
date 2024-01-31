@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (id)sharedLabelInfoManager;
+ (struct __CFString { } *)_CFDateFormatterPropertyForMonthLabelLength:(long long)a0;
+ (id)chartLabelFont;
+ (void)clearSharedManager;

- (id)init;
- (void)dealloc;
- (void)resetLocale;
- (void).cxx_destruct;
- (id)labelInfoForYAxis;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)a0;
- (BOOL)use24hrTime;
- (id)labelInfoWithString:(id)a0;
- (id)monthLabelInfoArrayForLabelLength:(long long)a0;

@end
