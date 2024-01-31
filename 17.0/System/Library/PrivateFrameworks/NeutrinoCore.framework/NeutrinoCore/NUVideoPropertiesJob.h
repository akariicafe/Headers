@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> _videoProperties;
}

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end
