@class NSURL;

@interface HMDemoCameraClip : HMCameraClip

@property (readonly, copy) NSURL *clipURL;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0 clipURL:(id)a1 startDate:(id)a2 duration:(double)a3 significantEvents:(id)a4;
- (id)initWithClipURL:(id)a0 startDate:(id)a1 duration:(double)a2 significantEvents:(id)a3;

@end
