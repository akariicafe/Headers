@class NSParagraphStyle;

@interface EKUIOccurrenceMeasurementUtilities : NSObject

@property (class, readonly, nonatomic) NSParagraphStyle *trailingAlignedTextParagraphStyle;
@property (class, readonly, nonatomic) NSParagraphStyle *leadingAlignedTextParagraphStyle;

+ (double)widthForTimeViewsWithFont:(id)a0 baseWidth:(double)a1;

@end
