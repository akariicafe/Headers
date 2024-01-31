@class NSString, UIImage;

@interface CACDisambiguationItem : NSObject

@property (nonatomic) long long type;
@property (readonly) NSString *displayName;
@property (readonly) NSString *displayDescription;
@property (readonly) UIImage *displayImage;

- (void)startInteraction;

@end
