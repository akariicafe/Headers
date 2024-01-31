@class UIColor, NSArray, NSURL, IKSrcSetRule, NSDictionary;

@interface IKImageElement : IKViewElement {
    double _srcWidth;
    double _srcHeight;
}

@property (retain, nonatomic) NSURL *resolvedURL;
@property (retain, nonatomic) NSArray *srcsetRules;
@property (retain, nonatomic) IKSrcSetRule *bestRule;
@property (readonly, nonatomic) IKImageElement *fallbackImageElement;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSDictionary *srcset;
@property (readonly, retain, nonatomic) NSURL *placeholderURL;
@property (readonly, nonatomic) unsigned long long imageType;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long position;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) long long fill;
@property (readonly, nonatomic) long long reflect;

+ (BOOL)shouldParseChildDOMElements;
+ (unsigned long long)_imageTypeForTagName:(id)a0;

- (void)_initCommon;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (void)_parseSrcset:(id)a0;
- (void)_resolveURL;
- (void)appDocumentDidMarkStylesDirty;
- (id)initWithOriginalElement:(id)a0;
- (id)initWithPrototypeElement:(id)a0 parent:(id)a1 appDataItem:(id)a2;

@end
