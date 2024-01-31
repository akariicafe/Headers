@interface SBPIPContentViewLayoutSizePreferences : NSObject

@property (nonatomic) double longSideMinimumSize;
@property (nonatomic) double longSideDefaultSize;
@property (nonatomic) double longSideMaximumSize;
@property (nonatomic) double shortSideMinimumSize;

- (id)initWithLongSideMinimumSize:(double)a0 longSideDefaultSize:(double)a1 longSideMaximumSize:(double)a2 shortSideMinimumSize:(double)a3;

@end
