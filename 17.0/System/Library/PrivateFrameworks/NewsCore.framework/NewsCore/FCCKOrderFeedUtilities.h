@interface FCCKOrderFeedUtilities : NSObject

+ (long long)_feedBinFromFeedID:(id)a0;
+ (unsigned long long)_orderFeedTopKFromBin:(long long)a0 timeInterval:(double)a1;
+ (id)orderFeedIDFromFeedID:(id)a0;
+ (id)orderFeedRequestForFeedID:(id)a0 feedRange:(id)a1;

@end
