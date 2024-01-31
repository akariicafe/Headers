@class AXAuditElement, AXAuditElementAttribute, NSString;
@protocol XRCInspectorPropertyDelegate;

@interface XRCInspectorProperty : NSObject

@property (retain, nonatomic) AXAuditElementAttribute *elementAttribute;
@property (retain, nonatomic) AXAuditElement *element;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) id<XRCInspectorPropertyDelegate> delegate;
@property (nonatomic) BOOL valueKnown;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id valueForDisplayOverride;

+ (void)_continueFetchingProperties:(id)a0 fetchedProperties:(id)a1 fetchedValues:(id)a2 completionBlock:(id /* block */)a3;
+ (void)fetchValuesForProperties:(id)a0 completionBlock:(id /* block */)a1;

- (void)performAction;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setNewValue:(id)a0;
- (void)previewElement:(id)a0;
- (void)focusOnElement:(id)a0;
- (id)_OSXConstantsToSelectorsDict;
- (id)_OSXSelectorForAction:(id)a0;
- (id)_OSXSelectorForAttribute:(id)a0;
- (id)_spacedStringFromCamelCase:(id)a0;
- (void)fetchValueWithCompletionBlock:(id /* block */)a0;
- (BOOL)showElementClassName;
- (BOOL)showIgnoredElements;

@end
