@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSCircularBuffer : NSObject {
    unsigned long long _maxSize;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long maxSize;

+ (id)_rearrangeObjects:(id)a0 forCurrentIndex:(unsigned long long)a1;

- (id)init;
- (id)flush;
- (id)_flush;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addObject:(id)a0;

@end
