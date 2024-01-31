@class NSString;
@protocol SBFAlwaysOnLiveRenderingBLSAttributesProvider;

@interface SBFAlwaysOnLiveRenderingBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider> {
    id<SBFAlwaysOnLiveRenderingBLSAttributesProvider> _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (id)initWithFBSScene:(id)a0;
- (id)assertionAttributes;
- (id)initWithUIScene:(id)a0;

@end
