@class NSLock, NSString, NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface STMSizeCacheEntry : NSObject {
    NSString *_itemPath;
    NSLock *_calculateLock;
}

@property (retain) id item;
@property (readonly) NSString *itemPath;
@property (retain) NSNumber *itemSize;
@property unsigned long long status;
@property (copy) id /* block */ sizingBlock;
@property (retain) NSOperationQueue *queue;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithContainer:(id)a0;
- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)calculateSize;
- (id)initWithURL:(id)a0 usingFastSizingIfPossible:(BOOL)a1;

@end
