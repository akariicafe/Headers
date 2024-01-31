@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHAMusicForYouCacheJob : NSObject <PHAMusicJob> {
    NSObject<OS_dispatch_queue> *_runQueue;
}

@property (readonly, nonatomic) double periodicity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
