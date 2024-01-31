@class NSUUID, ICTTVectorMultiTimestamp, NSMutableOrderedSet, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject <NSCopying> {
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _commandBounds;
}

@property (retain, nonatomic) ICTTVectorMultiTimestamp *timestamp;
@property (retain, nonatomic) NSDate *orientationTimestamp;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly, nonatomic) NSMutableOrderedSet *commands;
@property (readonly, nonatomic) NSOrderedSet *visibleCommands;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double width; double height; } unrotatedSize;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) BOOL canChangeTransientOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unrotatedBoundsInCommandSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullBounds;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGSize { double x0; double x1; })defaultPixelSize;
+ (struct CGSize { double x0; double x1; })fullSize:(struct CGSize { double x0; double x1; })a0 forOrientation:(long long)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })defaultSizeOrientationTransform:(long long)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (void)sortCommands:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })fullSize;
- (id)initWithData:(id)a0 replicaID:(id)a1;
- (id)initWithDrawing:(id)a0;
- (unsigned long long)mergeWithDrawing:(id)a0;
- (id)serializeWithPathData:(BOOL)a0;
- (id)initWithReplicaID:(id)a0;
- (id)mutableCommands;
- (id)initWithData:(id)a0 version:(unsigned int)a1 replicaID:(id)a2;
- (void)addNewCommand:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCommandBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })commandBounds;
- (struct ICDrawingCommandID { unsigned int x0; id x1; unsigned int x2; })commandIDForNewCommand;
- (id)initWithArchive:(const void *)a0 version:(unsigned int)a1 replicaID:(id)a2;
- (id)initWithCommands:(id)a0 fromDrawing:(id)a1;
- (id)insertNewTestCommand;
- (void)invalidateBounds;
- (unsigned int)saveToArchive:(void *)a0 withPathData:(BOOL)a1;
- (id)serializeWithPathData:(BOOL)a0 toVersion:(unsigned int *)a1;
- (id)setCommand:(id)a0 hidden:(BOOL)a1;
- (void)setCommandIDForInsertion:(id)a0;
- (BOOL)setTransientOrientation:(long long)a0;
- (void)sortCommands;
- (void)takeOrientationFrom:(id)a0;
- (id)visibleCommandForInsertingCommand:(id)a0;

@end
