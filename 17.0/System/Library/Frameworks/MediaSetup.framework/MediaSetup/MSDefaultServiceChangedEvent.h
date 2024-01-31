@class NSString;

@interface MSDefaultServiceChangedEvent : NSObject

@property (retain, nonatomic) NSString *oldServiceID;
@property (retain, nonatomic) NSString *serviceID;

- (void).cxx_destruct;
- (id)initWithOldServiceID:(id)a0 newServiceID:(id)a1;

@end
