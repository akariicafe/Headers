@class NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FBKRequestsLog : NSObject

@property BOOL isActive;
@property (retain) NSURL *requestDirectoryURL;
@property (retain) NSObject<OS_dispatch_queue> *requestSaveQueue;
@property (retain) NSMutableArray *requests;

+ (id)sharedInstance;

- (id)init;
- (void)addRequest:(id)a0;
- (BOOL)active;
- (void).cxx_destruct;
- (id)mutableArrayValueForKey:(id)a0;
- (void)_addRequest:(id)a0;
- (void)insertObject:(id)a0 inRequestsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromRequestsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInRequestsAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
