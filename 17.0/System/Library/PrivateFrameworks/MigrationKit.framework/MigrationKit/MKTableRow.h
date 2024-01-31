@class NSArray, NSString;

@interface MKTableRow : NSObject

@property (nonatomic) long long totalColumns;
@property (retain, nonatomic) NSArray *cells;
@property (retain, nonatomic) NSString *divider;

+ (id)rowWithCells:(id)a0;
+ (id)rowWithTitle:(id)a0;
+ (id)separatorRow;

- (id)init;
- (void).cxx_destruct;
- (void)adjustColumnsToFit:(id)a0;
- (id)asciiRepresentationUsingColumns:(id)a0;
- (id)csvRepresentation;
- (id)csvSafeValueForCell:(id)a0;
- (id)formattedValueForCell:(id)a0;
- (int)totalWidthOfColumns:(id)a0;

@end
