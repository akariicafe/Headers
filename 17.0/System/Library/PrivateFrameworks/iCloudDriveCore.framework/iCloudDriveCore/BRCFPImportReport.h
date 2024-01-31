@class NSError;

@interface BRCFPImportReport : NSObject

@property (copy, nonatomic) NSError *importError;
@property (nonatomic) long long reconciledItems;

- (id)init;
- (void).cxx_destruct;

@end
