@protocol NUImageProperties;

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end
