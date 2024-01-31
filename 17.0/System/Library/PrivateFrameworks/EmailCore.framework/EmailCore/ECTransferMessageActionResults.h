@class NSArray, NSDictionary, NSString, NSError;

@interface ECTransferMessageActionResults : ECLocalMessageActionResults <ECTransferMessageActionResultsBuilder>

@property (nonatomic) long long phaseForResults;
@property (copy, nonatomic) NSArray *completedItems;
@property (copy, nonatomic) NSArray *failedItems;
@property (copy, nonatomic) NSArray *createdServerMessages;
@property (copy, nonatomic) NSDictionary *downloadedDataByCopyItems;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;

@end
