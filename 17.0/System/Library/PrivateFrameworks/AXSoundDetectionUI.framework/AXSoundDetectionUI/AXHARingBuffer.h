@class NSMutableArray;

@interface AXHARingBuffer : NSObject {
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (void)reset;
- (id)content;
- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;

@end
