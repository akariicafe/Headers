@interface ASFriendListDisplayContext : NSObject

@property (nonatomic) long long displayMode;
@property (nonatomic) long long displayFilter;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
