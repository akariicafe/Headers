@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)empty;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)renderOrder;

@end
