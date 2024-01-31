@class NSString;

@interface IEExporterOptions : NSObject

@property (nonatomic) BOOL transparent;
@property (nonatomic) BOOL lightMode;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL conditions;
@property (nonatomic) int dotsPerInch;
@property (retain, nonatomic) NSString *highlightResponse;

- (void).cxx_destruct;

@end
