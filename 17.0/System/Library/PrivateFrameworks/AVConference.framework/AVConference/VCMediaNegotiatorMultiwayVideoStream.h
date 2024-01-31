@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) int payload;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
