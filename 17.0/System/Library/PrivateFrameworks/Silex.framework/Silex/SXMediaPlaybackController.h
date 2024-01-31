@class NSString, SXViewport;
@protocol SXMediaPlaybackDelegate;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {
    id<SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
    SXViewport *_viewport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;

@end
