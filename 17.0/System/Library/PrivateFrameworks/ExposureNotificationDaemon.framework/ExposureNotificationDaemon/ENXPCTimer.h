@class NSString, NSObject, NSDate;
@protocol OS_xpc_object;

@interface ENXPCTimer : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long cadence;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (id /* block */)activityHandler;
- (id)initWithName:(id)a0 delay:(double)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (id)criteria;
- (void)invalidate;
- (id)description;
- (id)initWithName:(id)a0 delay:(double)a1 gracePeriod:(double)a2 cadence:(unsigned long long)a3 priority:(long long)a4 options:(unsigned long long)a5 block:(id /* block */)a6;
- (id)initWithName:(id)a0 date:(id)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 date:(id)a1 gracePeriod:(double)a2 priority:(long long)a3 options:(unsigned long long)a4 block:(id /* block */)a5;
- (void)handleActivity;
- (id)initWithName:(id)a0 date:(id)a1 gracePeriod:(double)a2 cadence:(unsigned long long)a3 priority:(long long)a4 options:(unsigned long long)a5 block:(id /* block */)a6;
- (id)initWithName:(id)a0 timeInterval:(double)a1 priority:(long long)a2 options:(unsigned long long)a3 block:(id /* block */)a4;

@end
