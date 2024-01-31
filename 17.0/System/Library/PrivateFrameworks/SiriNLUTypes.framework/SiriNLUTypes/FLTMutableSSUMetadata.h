@class NSString, NSArray;

@interface FLTMutableSSUMetadata : FLTSSUMetadata

@property (copy, nonatomic) NSString *data_version;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSArray *user_data;
@property (copy, nonatomic) NSString *encoder_version;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
