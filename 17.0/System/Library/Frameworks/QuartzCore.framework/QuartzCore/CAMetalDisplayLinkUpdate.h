@protocol CAMetalDrawable;

@interface CAMetalDisplayLinkUpdate : NSObject

@property (readonly, nonatomic) id<CAMetalDrawable> drawable;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double targetPresentationTimestamp;

+ (id)updateWithDrawable:(id)a0 targetTimestamp:(double)a1 targetPresentationTimestamp:(double)a2;

- (void)dealloc;

@end
