@class NURenderer;

@interface NUDevice_iOS : NUDevice {
    NURenderer *_renderer;
}

- (id)initWithName:(id)a0;
- (long long)_preferredSampleMode;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_newRendererWithCIContextOptions:(id)a0 error:(out id *)a1;
- (unsigned long long)family;
- (id)_newMetalRendererWithOptions:(id)a0;

@end
