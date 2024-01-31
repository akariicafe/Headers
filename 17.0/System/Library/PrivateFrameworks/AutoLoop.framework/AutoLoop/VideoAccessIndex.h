@class AVAssetTrack, AVAsset, VideoReaderRand;

@interface VideoAccessIndex : NSObject {
    struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } mFrameTimes;
    unsigned int numFrames;
}

@property (retain) VideoReaderRand *readerRand;
@property (readonly) AVAssetTrack *videoTrack;
@property (readonly) AVAsset *asset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getFrameAtIndex:(unsigned int)a0 pixBuf:(struct __CVBuffer **)a1;
- (id)initFromFile:(id)a0 pixelFormat:(unsigned int)a1 frameTimes:(const void *)a2;

@end
