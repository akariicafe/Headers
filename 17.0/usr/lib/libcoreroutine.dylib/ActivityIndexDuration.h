@interface ActivityIndexDuration : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double duration;

- (id)initWithType:(unsigned long long)a0 index:(unsigned long long)a1 duration:(double)a2;

@end
