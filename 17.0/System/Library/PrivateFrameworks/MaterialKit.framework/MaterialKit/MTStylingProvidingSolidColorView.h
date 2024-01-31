@class NSString, NSMutableDictionary, UIView;

@interface MTStylingProvidingSolidColorView : UIView <MTVisualStylingProviding> {
    UIView *_highlightView;
}

@property (retain, nonatomic) NSMutableDictionary *stylingProviders;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (id)_stylingProvidingSolidColorLayer;

@end
