@class NSString, DOMTimeRanges, DOMMediaError;

@interface DOMHTMLMediaElement : DOMHTMLElement

@property (readonly) DOMMediaError *error;
@property (copy) NSString *src;
@property (readonly, copy) NSString *currentSrc;
@property (copy) NSString *crossOrigin;
@property (readonly) unsigned short networkState;
@property (copy) NSString *preload;
@property (readonly) DOMTimeRanges *buffered;
@property (readonly) unsigned short readyState;
@property (readonly) BOOL seeking;
@property double currentTime;
@property (readonly) double duration;
@property (readonly) BOOL paused;
@property double defaultPlaybackRate;
@property double playbackRate;
@property (readonly) DOMTimeRanges *played;
@property (readonly) DOMTimeRanges *seekable;
@property (readonly) BOOL ended;
@property BOOL autoplay;
@property BOOL loop;
@property BOOL controls;
@property double volume;
@property BOOL muted;
@property BOOL defaultMuted;
@property BOOL webkitPreservesPitch;
@property (readonly) BOOL webkitHasClosedCaptions;
@property BOOL webkitClosedCaptionsVisible;
@property (copy) NSString *mediaGroup;

- (void)load;
- (void)play;
- (void)pause;
- (id)canPlayType:(id)a0;
- (void)fastSeek:(double)a0;
- (double)getStartDate;

@end
