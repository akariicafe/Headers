@interface OADQTStubFile : OADEmbeddedMediaFile {
    BOOL isAudioOnly;
}

- (id)description;
- (BOOL)isAudioOnly;
- (void)setIsAudioOnly:(BOOL)a0;

@end
