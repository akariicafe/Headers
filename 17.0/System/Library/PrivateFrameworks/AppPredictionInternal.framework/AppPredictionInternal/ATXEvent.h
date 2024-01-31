@class NSDate, NSObject;
@protocol NSSecureCoding;

@interface ATXEvent : NSObject

@property (readonly, nonatomic) NSObject<NSSecureCoding> *event;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;

- (unsigned long long)hash;
- (BOOL)isEqualToEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEvent:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
