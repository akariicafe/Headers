@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject

@property (retain, nonatomic) TSDStroke *horizontalStroke;
@property (retain, nonatomic) TSDStroke *verticalStroke;
@property (retain, nonatomic) TSDStroke *exteriorStroke;
@property (nonatomic) unsigned int mask;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithMask:(unsigned int)a0 horizontalStroke:(id)a1 verticalStroke:(id)a2 exteriorStroke:(id)a3;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithDeprecatedArchive:(const void *)a0 unarchiver:(id)a1;

@end
