@class NSString, NSArray;

@interface FTMutableServiceDiscoveryResponse : FTServiceDiscoveryResponse

@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *zk_node;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
