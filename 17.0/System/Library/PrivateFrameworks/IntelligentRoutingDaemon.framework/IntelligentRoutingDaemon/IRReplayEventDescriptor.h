@class NSString, IRSystemStateDO, NSDate;

@interface IRReplayEventDescriptor : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *contextChangeReason;
@property (readonly, nonatomic) IRSystemStateDO *systemState;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 withContextChangeReason:(id)a1 withSystemState:(id)a2;

@end
