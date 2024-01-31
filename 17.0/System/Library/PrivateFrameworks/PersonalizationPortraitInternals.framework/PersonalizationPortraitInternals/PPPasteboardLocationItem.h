@class NSString, NSDictionary, NSDate;

@interface PPPasteboardLocationItem : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSDictionary *addressComponents;

- (void).cxx_destruct;
- (unsigned long long)memoryFootprintEstimate;

@end
