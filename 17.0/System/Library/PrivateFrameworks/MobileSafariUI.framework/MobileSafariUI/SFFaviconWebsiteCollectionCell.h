@class NSURL, NSString, UIImage;

@interface SFFaviconWebsiteCollectionCell : UICollectionViewListCell {
    NSURL *_siteURL;
    NSString *_title;
    id _faviconRequestToken;
    UIImage *_favicon;
}

- (void).cxx_destruct;
- (void)_requestFavicon;
- (void)_updateContentConfiguration;
- (void)setURL:(id)a0 withTitle:(id)a1;

@end
