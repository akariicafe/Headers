@class NSArray, NSMutableArray;

@interface HMDMessageFilterChain : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_filters;
}

@property (readonly, copy, nonatomic) NSArray *filters;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptMessage:(id)a0 error:(id *)a1;
- (void)addMessageFilter:(id)a0;
- (void)removeMessageFilter:(id)a0;
- (void)resetConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldCloudSyncData;

@end
