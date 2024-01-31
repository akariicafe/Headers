@class NSURL;

@interface WBSStartPageBackgroundImageDescription : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) double luminance;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 luminance:(double)a1;

@end
