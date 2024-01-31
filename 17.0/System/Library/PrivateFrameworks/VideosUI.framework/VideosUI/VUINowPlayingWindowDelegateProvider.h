@class NSString;
@protocol VUINowPlayingWindowDelegate;

@interface VUINowPlayingWindowDelegateProvider : NSObject <VUINowPlayingWindowDelegate>

@property (weak, nonatomic) id<VUINowPlayingWindowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)shouldNowPlayingWindowDismiss;

@end
