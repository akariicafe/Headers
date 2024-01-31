@class NSString, ATXPosterDescriptor;

@interface _ATXModePosterCandidate : NSObject

@property (readonly, nonatomic) ATXPosterDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly, nonatomic) BOOL isPreferredForGallery;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 fontName:(id)a1 isPreferredForGallery:(BOOL)a2;

@end
