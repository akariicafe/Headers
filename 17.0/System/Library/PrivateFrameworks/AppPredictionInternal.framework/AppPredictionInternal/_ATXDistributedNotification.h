@class NSString, NSDictionary;

@interface _ATXDistributedNotification : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) double timestamp;

- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualTo_ATXDistributedNotification:(id)a0;

@end
