@class NSString, TSDTextureDescription, TSDMagicMoveMatchObject;

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch>

@property (readonly, nonatomic) TSDMagicMoveMatchObject *outgoingObject;
@property (readonly, nonatomic) TSDMagicMoveMatchObject *incomingObject;
@property (nonatomic) long long matchType;
@property (nonatomic) double distance;
@property (nonatomic) double zOrderDistance;
@property (nonatomic) double attributeMatchPercent;
@property (retain, nonatomic) TSDTextureDescription *textureDescription;
@property (readonly, nonatomic) long long matchCost;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isTextMatch;
@property (nonatomic) BOOL isShapeMatchOnlyWithoutText;
@property (readonly, nonatomic) id incomingMatchObject;
@property (readonly, nonatomic) id outgoingMatchObject;

+ (id)matchWithOutgoingObject:(id)a0 incomingObject:(id)a1 matchType:(long long)a2 attributeMatchPercent:(double)a3 textureDescription:(id)a4;

- (void)dealloc;
- (id)description;
- (BOOL)conflictsWithMatch:(id)a0;
- (void)p_updateMagicMoveCost;

@end
