@class CKQueryCursor, NSMutableSet, NSString;

@interface FCTagSearchRecordStream : NSObject <FCStreaming>

@property (copy, nonatomic) id /* block */ operationConstructor;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) BOOL fetching;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSMutableSet *encounteredRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
