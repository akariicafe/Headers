@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;

- (void)clear;
- (id)init;
- (id)dequeue;
- (id)peek;
- (void)enqueue:(id)a0;
- (long long)size;
- (void).cxx_destruct;
- (void)apply:(id /* block */)a0 atIndex:(long long)a1;
- (void)apply:(id /* block */)a0 fromIndex:(long long)a1 toIndex:(unsigned long long)a2;
- (id)peek:(long long)a0;
- (id)peekTail;

@end
