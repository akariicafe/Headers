@class UIColor, NSString;

@interface MUPlatterViewStyleProvider : NSObject <MUPlatterViewStyleProviding>

@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)visualEffectForTraitCollection:(id)a0;

@end
