@class SUUILink, NSString, SUUIArtwork, SUUICountdown, SUUIEditorialComponent;

@interface SUUIBrickItem : NSObject

@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) SUUIArtwork *artwork;
@property (readonly, nonatomic) long long brickIdentifier;
@property (readonly, nonatomic) SUUICountdown *countdown;
@property (readonly, nonatomic) SUUIEditorialComponent *editorial;
@property (readonly, nonatomic) SUUILink *link;

- (id)description;
- (void).cxx_destruct;
- (void)_setLinkInfoWithLinkDictionary:(id)a0 context:(id)a1;
- (void)_setLinkItem:(id)a0;
- (id)initWithBannerRoomContext:(id)a0;
- (id)initWithComponentContext:(id)a0;
- (id)initWithCustomPageContext:(id)a0;

@end
