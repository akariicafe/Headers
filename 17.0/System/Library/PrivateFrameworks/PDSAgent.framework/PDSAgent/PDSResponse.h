@class NSDictionary;

@interface PDSResponse : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDictionary *statusByUser;
@property (readonly, nonatomic) long long ttl;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 statusByUser:(id)a1 ttl:(long long)a2;

@end
