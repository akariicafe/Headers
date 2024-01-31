@class TSWPPadding, TSTCellStyle;

@interface TSTCellStyleHandle : NSObject <NSCopying>

@property (readonly, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, nonatomic) BOOL isVariation;
@property (readonly, nonatomic) BOOL cellWraps;
@property (readonly, nonatomic) BOOL overridesPadding;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) int verticalAlignment;

+ (id)handleForCellStyle:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCellStyle:(id)a0;

@end
