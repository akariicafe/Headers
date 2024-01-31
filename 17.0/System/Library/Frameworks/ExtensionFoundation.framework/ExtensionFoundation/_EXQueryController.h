@class NSArray, NSOrderedSet, NSString, NSObject;
@protocol OS_dispatch_queue, _EXQueryControllerDelegate;

@interface _EXQueryController : NSObject <_EXServiceClientObserver, _EXActiveQueryObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _extensionsLock;
}

@property (readonly) NSArray *extensions;
@property (retain, nonatomic) NSOrderedSet *internalExtensions;
@property (nonatomic) unsigned long long unelectedCount;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } *extensionsLock;
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id<_EXQueryControllerDelegate> delegate;
@property (readonly) NSArray *extensionIdentities;
@property (readonly, copy) NSArray *queries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)asyncQueryQueue;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)executeQuery:(id)a0;
+ (id)executeQueries:(id)a0;

- (void)resultDidUpdate:(id)a0;
- (void)dealloc;
- (void)suspend;
- (id)initWithQueries:(id)a0 delegate:(id)a1;
- (void)query:(id)a0 resultDidUpdate:(id)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)extensionsLock;
- (id)initWithQueries:(id)a0;
- (void)resume;
- (void).cxx_destruct;

@end
