@class NSString;
@protocol NURenderStatistics;

@interface _NUVideoPlaybackFrameRequestResponse : _NURenderResult <NUVideoPlaybackFrameResult>

@property (retain) struct __CVBuffer { } *frame;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
