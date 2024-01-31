@class UIImage, UIColor, NSString;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>

@property (readonly, nonatomic) UIImage *favicon;
@property (readonly, nonatomic) unsigned long long faviconType;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic, getter=isGenerated) BOOL generated;
@property (readonly, nonatomic) UIColor *extractedBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 favicon:(id)a1 faviconType:(unsigned long long)a2;

@end
