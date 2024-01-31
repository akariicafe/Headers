@interface _UIImagePreparedCGImageContent : _UIImageCGImageContent {
    void *_renderRef;
}

- (id)typeName;
- (void)dealloc;
- (BOOL)isPreparedCGImage;

@end
