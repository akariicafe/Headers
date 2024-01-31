@class NSData;

@interface GDMockCNFetchResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;

- (id)fetchResult;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 currentHistoryToken:(id)a1;

@end
