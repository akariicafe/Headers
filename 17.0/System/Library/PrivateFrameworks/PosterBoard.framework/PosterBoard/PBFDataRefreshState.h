@class NSString;

@interface PBFDataRefreshState : NSObject

@property (readonly, nonatomic) BOOL needsRefresh;
@property (readonly, copy, nonatomic) NSString *refreshReason;

- (id)initWithNeedsRefresh:(BOOL)a0 reason:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
