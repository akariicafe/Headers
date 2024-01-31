@interface ANAnalyticsCounter : NSObject

@property (nonatomic) unsigned long long hexCount;
@property (nonatomic) unsigned int count;

- (void)finished;
- (id)init;
- (void)append:(unsigned long long)a0;
- (id)payload:(id)a0 keyTwo:(id)a1;
- (id)initWithHexCount:(unsigned long long)a0;

@end
