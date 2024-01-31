@class NSString;

@interface SXAdComponentRemovalModifier : NSObject <SXDOMModifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyDOM:(id)a0 context:(id)a1;
- (void)removeAdComponentsEmbeddedWithinContainer:(id)a0 childComponents:(id)a1;

@end
