@class VNTrackHomographyRequest;

@interface VKHomographyFrameProcessor : VKFrameProcessor {
    VNTrackHomographyRequest *_homographyRequest;
    id /* block */ _resultHandler;
}

@property (copy, nonatomic) id /* block */ resultHandler;

- (void)sendResult:(id)a0;
- (void).cxx_destruct;
- (void)processFrame:(id)a0;

@end
