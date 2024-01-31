@class AVTAvatar, AVTRenderer, AVTSnapshotHelper;

@interface AVTVariantBatchSnapshotter : NSObject {
    AVTAvatar *_avatar;
    AVTRenderer *_renderer;
    struct CGSize { double width; double height; } _size;
    double _scale;
    unsigned long long _antialiasingMode;
    AVTSnapshotHelper *_snapshotHelper;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)imageWithOptions:(id)a0 modifications:(id /* block */)a1;
- (id)initWithAvatar:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 antialiasingMode:(unsigned long long)a3 device:(id)a4;

@end
