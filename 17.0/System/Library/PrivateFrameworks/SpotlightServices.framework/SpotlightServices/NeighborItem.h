@class NSString;

@interface NeighborItem : NSObject

@property (retain, nonatomic) NSString *neighbor;
@property (nonatomic) long long type;
@property (nonatomic) double distance;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)initWithNeighbor:(id)a0 type:(long long)a1 distance:(double)a2 position:(unsigned long long)a3;

@end
