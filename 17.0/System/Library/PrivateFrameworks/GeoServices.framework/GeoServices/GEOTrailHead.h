@class NSArray;

@interface GEOTrailHead : NSObject

@property (readonly, nonatomic) int displayType;
@property (readonly, nonatomic) NSArray *trails;
@property (readonly, nonatomic) unsigned long long numberOfInlineItems;

+ (int)_convertedDisplayType:(int)a0;
+ (id)trailsFromProtos:(id)a0;

- (void).cxx_destruct;
- (id)initWithTrailHead:(id)a0;

@end
