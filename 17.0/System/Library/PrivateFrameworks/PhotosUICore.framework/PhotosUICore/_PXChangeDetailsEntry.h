@class PXMutableArrayChangeDetails, NSMutableArray, NSDictionary;

@interface _PXChangeDetailsEntry : NSObject

@property (readonly, nonatomic) PXMutableArrayChangeDetails *changeDetails;
@property (nonatomic) long long index;
@property (readonly, nonatomic) NSMutableArray *subitemEntries;
@property (readonly, nonatomic) NSDictionary *subitemChangesByItem;

- (void).cxx_destruct;
- (void)addSubitemEntry:(id)a0;
- (id)initWithIndex:(long long)a0 changeDetails:(id)a1;
- (void)updateWithSectionedChangeDetails:(id)a0;

@end
