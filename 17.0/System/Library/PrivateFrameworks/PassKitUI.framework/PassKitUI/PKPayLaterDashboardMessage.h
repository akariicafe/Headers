@class PKDashboardPassMessage, NSDate;

@interface PKPayLaterDashboardMessage : NSObject

@property (readonly, nonatomic) PKDashboardPassMessage *message;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) long long priority;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 priority:(long long)a1 date:(id)a2;

@end
