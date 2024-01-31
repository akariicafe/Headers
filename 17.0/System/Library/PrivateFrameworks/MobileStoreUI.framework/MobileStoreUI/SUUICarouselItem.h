@class NSString, SUUILink;
@protocol SUUIArtworkProviding;

@interface SUUICarouselItem : NSObject

@property (retain, nonatomic) id<SUUIArtworkProviding> artworkProvider;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) long long carouselItemIdentifier;
@property (readonly, nonatomic) SUUILink *link;

- (id)description;
- (void).cxx_destruct;
- (id)artworkForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setLinkItem:(id)a0;
- (id)initWithComponentContext:(id)a0;

@end
