@class NSString, NSDictionary, NSURL, NSLocale, SWFeedConfiguration;
@protocol SWLocation;

@interface SWContainerConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentEnvironment;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) id<SWLocation> location;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *activePictureInPictureURL;
@property (copy, nonatomic) SWFeedConfiguration *feedConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreFront:(id)a0 locale:(id)a1 contentEnvironment:(id)a2 contentSizeCategory:(id)a3 canvasSize:(struct CGSize { double x0; double x1; })a4 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 dataSources:(id)a6 location:(id)a7 sourceURL:(id)a8 activePictureInPictureURL:(id)a9 feedConfiguration:(id)a10;

@end
