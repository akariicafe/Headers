@class NSMutableArray;

@interface TYUsagePairs : NSObject

@property (retain, nonatomic) NSMutableArray *_usagePages;
@property (retain, nonatomic) NSMutableArray *_usages;

- (id)init;
- (void).cxx_destruct;
- (id)usagePages;
- (id)usages;

@end
