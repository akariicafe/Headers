@class LPLinkMetadata, UIDocumentProperties, NSLayoutConstraint, LPLinkView;

@interface _UIDocumentPropertiesIconView : UIView {
    UIDocumentProperties *_properties;
    LPLinkView *_linkView;
    NSLayoutConstraint *_centerXInsetConstraint;
    NSLayoutConstraint *_trailingInsetConstraint;
    NSLayoutConstraint *_centerYInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
}

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } iconInsets;

- (void).cxx_destruct;
- (void)_updateImage;
- (id)_preferredSender;
- (void)_fireTapAction:(id)a0;
- (id)_preferredPresentationSourceItem;
- (id)initWithMetadata:(id)a0;
- (id)initWithProperties:(id)a0 metadata:(id)a1;

@end
