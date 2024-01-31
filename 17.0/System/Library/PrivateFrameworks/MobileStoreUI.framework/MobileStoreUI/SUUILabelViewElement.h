@class SUUIViewElementText, NSString, NSArray, NSMutableDictionary, IKDOMElement;
@protocol SUUILinkHandler;

@interface SUUILabelViewElement : SUUIViewElement <SUUILinkHandler> {
    long long _linkCounter;
    NSMutableDictionary *_linkToViewButtonElements;
    NSMutableDictionary *_domObjectsToViewElements;
    SUUIViewElementText *_text;
    IKDOMElement *_xml;
}

@property (readonly, nonatomic) long long labelViewStyle;
@property (weak, nonatomic) id<SUUILinkHandler> linkDelegate;
@property (readonly, nonatomic) NSString *moreButtonTitle;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) SUUIViewElementText *text;
@property (readonly, nonatomic) NSArray *badges;
@property (readonly, nonatomic) NSArray *trailingBadges;
@property (readonly, nonatomic) long long badgePlacement;
@property (nonatomic) BOOL containsLinks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldParseChildDOMElements;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_walkDOM:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (void)_createText:(id)a0;
- (id)_stringFromDateElement:(id)a0;
- (id)_stringFromDurationElement:(id)a0;
- (id)_stringFromNumberElement:(id)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (void)linkTapped:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)pageComponentType;
- (id)uniquingMapKey;

@end
