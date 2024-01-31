@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKNotifyRegistration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _token;
    NSMutableArray *_subregistrations;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)subregisterWithHandler:(id /* block */)a0;
- (id)initWithName:(id)a0;
- (void)removeInvalidatedSubregistration:(id)a0;
- (BOOL)hasSubregistrations;
- (void).cxx_destruct;

@end
