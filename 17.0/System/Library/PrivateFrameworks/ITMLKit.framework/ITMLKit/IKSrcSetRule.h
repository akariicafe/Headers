@class NSURL, NSString, IKStyleMediaQuery;

@interface IKSrcSetRule : NSObject

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSString *descriptor;
@property (retain, nonatomic) IKStyleMediaQuery *mediaQuery;

- (void).cxx_destruct;
- (void)_parseDescriptor:(id)a0;
- (void)_parseMediaQueryDescriptor:(id)a0;
- (void)_parseResolutionDescriptor:(id)a0;
- (id)initWithURL:(id)a0 descriptor:(id)a1;

@end
