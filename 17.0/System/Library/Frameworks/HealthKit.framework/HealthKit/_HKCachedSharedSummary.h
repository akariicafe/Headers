@class HKSharedSummary;

@interface _HKCachedSharedSummary : NSObject

@property (readonly, nonatomic) HKSharedSummary *summary;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSummary:(id)a0;

@end
