@class NSString;

@interface SIMovStreamInfo : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int frameRate;
@property (readonly, nonatomic) unsigned int format;
@property (readonly, nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) int readCycle;

- (id)description;
- (void).cxx_destruct;
- (id)initInfoWithTrackName:(id)a0 frameRate:(double)a1 pixelBufferFormat:(unsigned int)a2 resolution:(struct CGSize { double x0; double x1; })a3;

@end
