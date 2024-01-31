@class NSArray;
@protocol FCContentContext;

@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType>

@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *jsonRecordSources;

- (void).cxx_destruct;
- (void)fetchRecordTreeWithRootIDs:(id)a0 branchKeysByRecordType:(id)a1 cachePolicy:(id)a2 completion:(id /* block */)a3;
- (void)fetchRecordTreeWithRootIDs:(id)a0 branchKeysByRecordType:(id)a1 cachePolicy:(id)a2 edgeCacheHint:(id)a3 completion:(id /* block */)a4;
- (id)initWithContext:(id)a0 jsonRecordSources:(id)a1;

@end
