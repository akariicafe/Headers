@class NSString;

@interface SXGradientFillToBackgroundColorModifier : NSObject <SXDOMModifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertGradientFillToBackgroundColorForComponentStyle:(id)a0;
- (void)modifyDOM:(id)a0 context:(id)a1;

@end
