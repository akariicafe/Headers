@class UINavigationItem, NSURL, _UIDocumentPropertiesIconView, LPMetadataProvider, _UIDocumentURLChangeObserver, UIAction, _UIDocumentPropertiesHeaderView, LPLinkMetadata;

@interface UIDocumentProperties : NSObject

@property (weak, nonatomic) _UIDocumentPropertiesHeaderView *headerView;
@property (weak, nonatomic) _UIDocumentPropertiesIconView *iconView;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) _UIDocumentURLChangeObserver *urlChangeObserver;
@property (retain, nonatomic, setter=_setMetadata:) LPLinkMetadata *_metadata;
@property (retain, nonatomic, setter=_setMetadataProvider:) LPMetadataProvider *_metadataProvider;
@property (readonly, nonatomic) NSURL *_representedURL;
@property (copy, nonatomic, setter=_setWantsIconRepresentationChangedHandler:) id /* block */ _wantsIconRepresentationChangedHandler;
@property (weak, nonatomic, setter=_setAssociatedNavigationItem:) UINavigationItem *_associatedNavigationItem;
@property (retain, nonatomic) UIAction *iconRepresentationAction;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) id /* block */ dragItemsProvider;
@property (copy, nonatomic) id /* block */ activityViewControllerProvider;
@property (nonatomic) BOOL wantsIconRepresentation;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didLoadMetadata:(id)a0;
- (void)_fetchMetadataIfNecessary:(BOOL)a0;
- (id)_headerViewForMenuInteraction:(id)a0 sourceViewProvider:(id /* block */)a1;
- (id)_iconView;
- (void)_performBlockAndCallIconRepresentationChangedHandlerIfNecessary:(id /* block */)a0;
- (id)_placeholderMetadata;
- (void)_updateMetadataInUse;
- (id)initWithMetadata:(id)a0;

@end
