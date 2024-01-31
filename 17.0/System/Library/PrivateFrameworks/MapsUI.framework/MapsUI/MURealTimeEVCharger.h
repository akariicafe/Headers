@interface MURealTimeEVCharger : NSObject

@property (readonly, nonatomic) unsigned long long total;
@property (readonly, nonatomic) unsigned long long available;
@property (readonly, nonatomic) int status;

- (id)initWithAvailable:(unsigned long long)a0 total:(unsigned long long)a1 status:(int)a2;

@end
