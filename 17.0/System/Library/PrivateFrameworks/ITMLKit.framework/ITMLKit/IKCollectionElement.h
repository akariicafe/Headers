@class IKHeaderElement, NSArray, IKAppBrowserBridge;

@interface IKCollectionElement : IKViewElement {
    NSArray *_sections;
}

@property (readonly, retain, nonatomic) IKHeaderElement *header;
@property (readonly, retain, nonatomic) NSArray *sections;
@property (readonly, nonatomic) IKAppBrowserBridge *browserBridge;

+ (id)supportedFeaturesForElementName:(id)a0;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (void)appDocumentDidMarkStylesDirty;

@end
