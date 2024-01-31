@class NSMutableDictionary, NSMutableArray, NSDate;

@interface DecisionDetails : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *evaluations;
@property (retain, nonatomic) NSMutableDictionary *additionalInfo;
@property (nonatomic) unsigned long long reasonCode;
@property (nonatomic) char *reason;

- (void)dealloc;
- (id)description;
- (id)initWithReason:(const char *)a0 code:(unsigned long long)a1 evaluations:(id)a2;
- (void).cxx_destruct;

@end
