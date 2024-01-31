@class NSString, NSData, WFImage, WFContentItem;

@interface WFDialogContentListItem : WFDialogListItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFContentItem *contentItem;
@property (retain, nonatomic) NSData *archivedContentItem;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (nonatomic) BOOL hideSubtitle;

- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_loadContentItemWithCompletion:(id /* block */)a0;
- (id)initWithContentItem:(id)a0 selected:(BOOL)a1 hideSubtitle:(BOOL)a2;
- (id)initWithContentItem:(id)a0 selected:(BOOL)a1 serializedPossibleState:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 selected:(BOOL)a3 contentItem:(id)a4 hideSubtitle:(BOOL)a5 serializedPossibleState:(id)a6;
- (BOOL)loadAltTextWithCompletion:(id /* block */)a0;
- (BOOL)loadImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (BOOL)loadSubtitleWithCompletion:(id /* block */)a0;

@end
