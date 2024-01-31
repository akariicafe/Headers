@class NSString;

@interface TSWPPadding : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing>

@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)padding;
+ (id)paddingWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;

- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTopInset:(double)a0 leftInset:(double)a1 bottomInset:(double)a2 rightInset:(double)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (id)paddingByMirroringHorizontal;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;

@end
