@class NSURL, LPTheme, LPImagePresentationProperties, LPImage, LPHTMLComponent, LPCSSResolver, UIColor, LPCaptionBarPresentationProperties, DOMDocument, NSString, LPMetadataProvider, DOMDocumentFragment, LPLinkMetadata, LPPointUnit, DOMElement;
@protocol LPLinkHTMLGeneratorDelegate;

@interface LPLinkHTMLGenerator : NSObject {
    LPMetadataProvider *_pendingMetadataProvider;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    BOOL _everBuiltView;
}

@property (readonly, nonatomic) DOMDocument *parentDocument;
@property (readonly, nonatomic) LPCSSResolver *cssResolver;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) LPTheme *theme;
@property (readonly, nonatomic) BOOL isPreliminary;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) LPPointUnit *rootWidth;
@property (nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) BOOL _useVariablesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) BOOL _includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) BOOL _includeDarkInterfaceInlineStyles;
@property (nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad;
@property (nonatomic, setter=_setDisableAutoPlay:) BOOL _disableAutoPlay;
@property (readonly, nonatomic) BOOL _canTapToLoad;
@property (weak, nonatomic) id<LPLinkHTMLGeneratorDelegate> delegate;
@property (readonly, retain, nonatomic) DOMDocumentFragment *documentFragment;
@property (nonatomic) BOOL useInlineStyles;
@property (nonatomic) BOOL applyCornerRadiusToLink;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *URL;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_URLForImage:(id)a0;
- (id)_URLForResource:(id)a0 withMIMEType:(id)a1;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (id)_createRootElement;
- (void)_fetchMetadata;
- (void)_rebuildView;
- (void)_setMetadata:(id)a0 isFinal:(BOOL)a1;
- (void)_setPresentationProperties:(id)a0;
- (void)clearCurrentLayout;
- (id)initWithMetadataLoadedFromURL:(id)a0 document:(id)a1;
- (id)initWithPresentationProperties:(id)a0 URL:(id)a1 document:(id)a2;
- (id)initWithPresentationProperties:(id)a0 document:(id)a1;
- (id)initWithURL:(id)a0 document:(id)a1;

@end
