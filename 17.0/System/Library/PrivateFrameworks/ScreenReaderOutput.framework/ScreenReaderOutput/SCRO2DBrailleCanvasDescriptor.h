@interface SCRO2DBrailleCanvasDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long cellHeight;
@property (nonatomic) unsigned long long cellWidth;
@property (nonatomic) BOOL hasConsistentHorizontalPinSpacing;
@property (nonatomic) BOOL hasConsistentVerticalPinSpacing;
@property (nonatomic) double verticalPinSpacing;
@property (nonatomic) double horizontalPinSpacing;
@property (nonatomic) double interCellHorizontalSpacing;
@property (nonatomic) double interCellVerticalSpacing;
@property (nonatomic) BOOL skipPinBetweenCellsHorizontally;
@property (nonatomic) BOOL skipPinBetweenCellsVertically;
@property (nonatomic) unsigned long long pinHeightStyle;
@property (nonatomic) unsigned long long detentCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numberOfGraphicsLinesAvailableForTextLines:(unsigned long long)a0;
- (unsigned long long)numberOfTextLinesAvailable;

@end
