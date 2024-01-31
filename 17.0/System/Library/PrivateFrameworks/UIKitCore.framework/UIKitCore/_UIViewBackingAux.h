@class NSString, UIVisualEffectBackingHost, NSMutableSet, CALayer, NSMutableArray;

@interface _UIViewBackingAux : NSObject {
    CALayer *_intermediateLayer;
    CALayer *_intermediateLayerRetained;
    NSMutableSet *_privateSubviews;
    NSMutableArray *_allSubviewsCache;
    UIVisualEffectBackingHost *_effectHost;
    NSString *_captureGroupName;
}

- (void).cxx_destruct;

@end
