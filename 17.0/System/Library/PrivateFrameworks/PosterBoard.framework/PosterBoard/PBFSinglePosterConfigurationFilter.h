@interface PBFSinglePosterConfigurationFilter : NSObject <PBFPosterConfigurationFiltering> {
    void /* unknown type, empty encoding */ configuration;
}

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldIncludePosterConfiguration:(id)a0 inSwitcherConfiguration:(id)a1;

@end
