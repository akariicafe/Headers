@class NSMutableArray;

@interface MFBufferedQueue : NSObject {
    NSMutableArray *_queue;
}

@property (readonly, nonatomic) unsigned int size;

- (unsigned long long)sizeForItem:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned int)a0;
- (BOOL)flush;
- (BOOL)addItem:(id)a0;
- (BOOL)_flush;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)handleItems:(id)a0;

@end
