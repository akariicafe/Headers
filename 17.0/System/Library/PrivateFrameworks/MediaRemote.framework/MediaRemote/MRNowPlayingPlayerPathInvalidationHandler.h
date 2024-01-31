@class MRPlayerPath, NSObject;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) BOOL invalidateImmediatlyIfInvalid;

- (id)initWithPlayerPath:(id)a0 invalidateImmediatlyIfInvalid:(BOOL)a1 queue:(id)a2 invalidationCallback:(id /* block */)a3;
- (id)description;
- (void).cxx_destruct;

@end
