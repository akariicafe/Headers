@class NSString, NSUUID, NSArray, NSMutableDictionary, NSMutableArray;

@interface OU3DObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSUUID *parent_id;
@property (nonatomic) float confidence;
@property (retain, nonatomic) NSArray *logits;
@property (retain, nonatomic) NSArray *embedding2d;
@property (retain, nonatomic) NSArray *embedding3d;
@property (retain, nonatomic) NSArray *corners_status;
@property (retain, nonatomic) NSArray *edges_status;
@property (retain, nonatomic) NSMutableDictionary *parts;
@property (retain) NSArray *faces_status;
@property (retain) NSMutableArray *corners_history;
@property (retain) NSMutableArray *refined_box_history;
@property (nonatomic) BOOL status;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (retain) NSString *detection_source;
@property (retain, nonatomic) NSString *cadModelName;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) NSMutableDictionary *groups;
@property (readonly, nonatomic) NSMutableDictionary *boxesDict;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getDimension:(id)a0 dim:(void *)a1;
- (BOOL)getTransform:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (BOOL)runIsValidType:(id)a0;
- (void)clearGroupInfo:(id)a0;
- (void)addBoxesDict:(const struct box3d { void /* unknown type, empty encoding */ x0[8]; } *)a0 forDictKey:(id)a1;
- (void)addGroupId:(int)a0 forGroupType:(id)a1;
- (void)addObjectPartAttribute:(id)a0;
- (void)addRefinedBoxToHistory:(id)a0;
- (int)getFrameIndexOfLastRefine;
- (BOOL)hasBoxesDict:(id)a0;
- (void)removeBoxesDict:(id)a0;
- (void)removeObjectPartAttribute:(id)a0;
- (void)updateObjectEmbedding2d:(id)a0;
- (void)updateObjectEmbedding3d:(id)a0;

@end
