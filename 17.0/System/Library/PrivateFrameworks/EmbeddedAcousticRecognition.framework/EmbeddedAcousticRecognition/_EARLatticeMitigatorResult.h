@class NSString;

@interface _EARLatticeMitigatorResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float calibrationScale;
@property (readonly, nonatomic) float calibrationOffset;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion:(id)a0 score:(float)a1 threshold:(float)a2 calibrationScale:(float)a3 calibrationOffset:(float)a4;

@end
