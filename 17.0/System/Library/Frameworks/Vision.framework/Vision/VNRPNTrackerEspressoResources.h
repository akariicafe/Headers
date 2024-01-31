@class VNEspressoResources;

@interface VNRPNTrackerEspressoResources : NSObject {
    VNEspressoResources *_rpnInitEspressoResources;
    VNEspressoResources *_rpnTrackEspressoResources;
}

- (void).cxx_destruct;
- (id)_initWithRPNInitEspressoResources:(id)a0 RPNTrackEspressoResources:(id)a1;

@end
