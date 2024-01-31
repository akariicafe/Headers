@class NSString;

@interface DDMatch : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchedRange;
@property (readonly, nonatomic) NSString *matchedString;

+ (id)resultWithDDScannerResult:(id)a0;
+ (id)resultWithDDScannerResult:(id)a0 originalString:(id)a1;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;
- (void)commonInitWithDDScannerResult:(id)a0 originalString:(id)a1;
- (id)initWithDDScannerResult:(id)a0 originalString:(id)a1;

@end
