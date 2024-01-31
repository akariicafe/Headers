@class NSCondition, NSDate;

@interface AAFFuture : NSObject

@property (nonatomic) BOOL resolved;
@property (nonatomic) double maxWait;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSCondition *valueCondition;
@property (retain, nonatomic) id valueObj;

- (id)init;
- (id)initWithMaxWait:(double)a0 description:(id)a1;
- (void).cxx_destruct;
- (id)value;
- (void)setValue:(id)a0;

@end
