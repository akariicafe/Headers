@class SBMainDisplayConfigurationTransformer;

@interface SBFBSDisplayTransformer : NSObject <FBSDisplayTransformer> {
    SBMainDisplayConfigurationTransformer *_emulatedMainDisplayTransformer;
}

- (id)init;
- (void).cxx_destruct;
- (id)transformDisplayConfiguration:(id)a0;

@end
