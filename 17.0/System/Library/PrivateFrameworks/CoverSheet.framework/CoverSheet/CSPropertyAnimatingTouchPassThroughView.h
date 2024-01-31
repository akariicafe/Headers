@class NSArray, NSString;

@interface CSPropertyAnimatingTouchPassThroughView : SBFTouchPassThroughView <SBFCustomImplicitPropertyAnimating>

@property (copy, nonatomic) NSArray *animatedLayerProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;

@end
