@class NSString, TSDStroke;

@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying> {
    BOOL _definedTopStrokeOrder;
    BOOL _definedRightStrokeOrder;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStrokeOrder;
}

@property (readonly, nonatomic) BOOL definedTopStroke;
@property (readonly, nonatomic) BOOL definedLeftStroke;
@property (readonly, nonatomic) BOOL definedBottomStroke;
@property (readonly, nonatomic) BOOL definedRightStroke;
@property (readonly, nonatomic) TSDStroke *topStroke;
@property (readonly, nonatomic) int topStrokeOrder;
@property (readonly, nonatomic) TSDStroke *leftStroke;
@property (readonly, nonatomic) int leftStrokeOrder;
@property (readonly, nonatomic) TSDStroke *bottomStroke;
@property (readonly, nonatomic) int bottomStrokeOrder;
@property (readonly, nonatomic) TSDStroke *rightStroke;
@property (readonly, nonatomic) int rightStrokeOrder;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellBorder;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellDiffProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didInitFromSOS;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (void)_clearTopStroke;
- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearRightStroke;
- (void)applyToCell:(id)a0;
- (BOOL)hasEqualStrokes:(id)a0;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (void)setBottomStroke:(id)a0 order:(int)a1;
- (void)setLeftStroke:(id)a0 order:(int)a1;
- (void)setRightStroke:(id)a0 order:(int)a1;
- (void)setTopStroke:(id)a0 order:(int)a1;

@end
