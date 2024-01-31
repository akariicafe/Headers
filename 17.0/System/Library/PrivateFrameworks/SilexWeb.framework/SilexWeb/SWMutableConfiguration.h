@class SWKeyboardConfiguration, NSString, NSDictionary, NSURL, NSLocale, SWFeedConfiguration;
@protocol SWLocation;

@interface SWMutableConfiguration : SWConfiguration

@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentEnvironment;
@property (nonatomic) BOOL is24HourTime;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) id<SWLocation> location;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *activePictureInPictureURL;
@property (copy, nonatomic) SWFeedConfiguration *feedConfiguration;
@property (copy, nonatomic) SWKeyboardConfiguration *keyboardConfiguration;
@property (nonatomic) BOOL isTransitioning;

- (void).cxx_destruct;

@end
