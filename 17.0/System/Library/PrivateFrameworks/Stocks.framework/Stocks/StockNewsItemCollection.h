@class NSArray;

@interface StockNewsItemCollection : NSObject

@property (retain, nonatomic) NSArray *newsItems;
@property (nonatomic) double expirationTime;

- (void).cxx_destruct;
- (id)archiveArray;
- (id)initWithArchiveArray:(id)a0;

@end
