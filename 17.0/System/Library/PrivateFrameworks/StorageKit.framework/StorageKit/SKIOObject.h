@class NSString;

@interface SKIOObject : NSObject

@property (readonly, nonatomic) unsigned int ioObj;
@property (readonly, copy, nonatomic) NSString *ioClassName;

- (void)dealloc;
- (id)initWithIOObject:(unsigned int)a0;
- (id)description;
- (id)copyPropertyWithClass:(Class)a0 key:(id)a1;
- (id)initWithIOObject:(unsigned int)a0 retain:(BOOL)a1;
- (id)initWithIteratorNext:(id)a0;
- (id)copyParent;
- (id)copyParentPropertyWithClass:(Class)a0 key:(id)a1;
- (id)copyProperties;
- (id)initWithClassName:(id)a0;
- (id)initWithSKIOObject:(id)a0;
- (id)ioObjectWithClassName:(id)a0 iterateParents:(BOOL)a1;
- (id)newIteratorWithOptions:(unsigned int)a0;
- (void)waitIOKitQuiet;

@end
