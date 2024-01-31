@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask

@property (retain, nonatomic) NSMutableArray *moveItems;
@property (retain, nonatomic) NSArray *pushedMoveRequests;
@property (nonatomic) long long dataclass;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (void)addSourceID:(id)a0 sourceFolder:(id)a1 destinatonFolder:(id)a2;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
