@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property unsigned int width;
@property unsigned int height;
@property (readonly) unsigned int videoWidth;
@property (readonly) unsigned int videoHeight;
@property (copy) NSString *poster;
@property BOOL playsInline;
@property (readonly) BOOL webkitSupportsFullscreen;
@property (readonly) BOOL webkitDisplayingFullscreen;

- (void)webkitEnterFullScreen;
- (void)webkitEnterFullscreen;
- (void)webkitExitFullScreen;
- (void)webkitExitFullscreen;

@end
