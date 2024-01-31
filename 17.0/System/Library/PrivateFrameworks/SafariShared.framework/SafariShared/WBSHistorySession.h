@class NSDate;

@interface WBSHistorySession : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL isCurrentSession;

+ (id)currentSession;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSessionStartDate:(id)a0;

@end
