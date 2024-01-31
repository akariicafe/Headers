@interface RTMapsSupportManagerQueryContentsDidChangeNotification : RTNotification

@property (readonly, nonatomic) long long queryType;

- (id)init;
- (id)initWithQueryType:(long long)a0;

@end
