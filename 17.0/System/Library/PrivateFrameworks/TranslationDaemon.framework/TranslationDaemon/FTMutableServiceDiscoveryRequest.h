@class NSString;

@interface FTMutableServiceDiscoveryRequest : FTServiceDiscoveryRequest

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *zk_path;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
