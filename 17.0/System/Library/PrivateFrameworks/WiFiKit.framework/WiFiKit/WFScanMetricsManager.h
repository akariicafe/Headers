@class NSMutableDictionary, NSDate;

@interface WFScanMetricsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionCounts;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL submited;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)submit;
- (void)ingestScanResults:(id)a0;
- (id)sectionNameForRecord:(id)a0;

@end
