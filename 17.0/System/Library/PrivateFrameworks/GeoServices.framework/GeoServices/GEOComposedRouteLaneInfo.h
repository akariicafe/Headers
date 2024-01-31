@class NSArray, NSMutableArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {
    NSMutableArray *_directions;
    BOOL _good;
    BOOL _hov;
    BOOL _preferred;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasDirections;
@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) BOOL isLaneForManeuver;
@property (readonly, nonatomic) BOOL isHOVLane;
@property (readonly, nonatomic) BOOL isPreferredLaneForManeuver;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLaneInfo:(id)a0;

@end
