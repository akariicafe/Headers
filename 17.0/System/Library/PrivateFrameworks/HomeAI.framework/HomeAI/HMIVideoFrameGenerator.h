@class HMIVideoAssetReader;

@interface HMIVideoFrameGenerator : HMFObject

@property (readonly) HMIVideoAssetReader *reader;

- (void).cxx_destruct;
- (void)generateVideoFramesForTimes:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithVideoFragment:(id)a0;

@end
