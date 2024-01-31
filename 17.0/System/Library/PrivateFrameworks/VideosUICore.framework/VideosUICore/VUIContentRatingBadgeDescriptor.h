@class NSString;

@interface VUIContentRatingBadgeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, nonatomic, getter=isTemplatedImage) BOOL templatedImage;

- (void).cxx_destruct;
- (id)initWithResourceName:(id)a0 isTemplatedImage:(BOOL)a1;

@end
