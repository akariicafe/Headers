@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {
    AVDisplayCriteriaInternal *_displayCriteria;
    int _videoDynamicRange;
    float _refreshRate;
}

@property (readonly, nonatomic) float refreshRate;
@property (readonly) int videoDynamicRange;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRefreshRate:(float)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (id)initWithRefreshRate:(float)a0 videoDynamicRange:(int)a1;

@end
