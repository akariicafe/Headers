@class NSString;

@interface SXAccessibilityHyphenationModifier : NSObject <SXDOMModifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableHyphenationForComponentTextStyleWithIdentifier:(id)a0 DOM:(id)a1 context:(id)a2;
- (void)modifyDOM:(id)a0 context:(id)a1;

@end
