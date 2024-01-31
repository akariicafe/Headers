@class NSString;

@interface PRPosterLabel : UILabel <PRPosterAppearanceObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)posterAppearanceDidChange:(id)a0;

@end
