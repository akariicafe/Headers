@class NSString, NSDate;

@interface _PXStoryTimeBasedAssetInfo : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 uuid:(id)a1;

@end
