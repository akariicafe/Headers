@class NSDictionary;

@interface PPSocialHighlightStaticFeatureProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSDictionary *_computedFeatures;
    id /* block */ _keyBlock;
}

- (void).cxx_destruct;
- (id)valueForHighlight:(id)a0;

@end
