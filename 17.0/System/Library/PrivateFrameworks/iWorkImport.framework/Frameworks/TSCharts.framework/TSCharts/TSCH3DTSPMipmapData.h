@class TSPData, TSCH3DTSPImageDataTexture;

@interface TSCH3DTSPMipmapData : NSObject {
    TSCH3DTSPImageDataTexture *_parent;
}

@property (readonly, nonatomic) TSPData *data;

+ (id)dataWithTSPData:(id)a0;

- (void)setParent:(id)a0;
- (void).cxx_destruct;
- (id)databuffer;
- (id)initWithTSPData:(id)a0;

@end
