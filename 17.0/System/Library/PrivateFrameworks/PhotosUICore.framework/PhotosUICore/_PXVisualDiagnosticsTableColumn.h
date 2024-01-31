@class NSString;

@interface _PXVisualDiagnosticsTableColumn : NSObject <PXVisualDiagnosticsTableColumnConfiguration>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) double width;

- (id)init;
- (void).cxx_destruct;

@end
