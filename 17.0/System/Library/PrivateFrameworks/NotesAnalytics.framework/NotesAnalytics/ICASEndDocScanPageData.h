@class NSString, NSNumber;

@interface ICASEndDocScanPageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *endPageCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithEndPageCount:(id)a0;

@end
