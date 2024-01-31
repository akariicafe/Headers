@class NSString, NSData, KVDatasetInfo;

@interface KVEmbeddedDatasetReader : NSObject <KVDatasetReader> {
    NSData *_data;
    const struct Dataset { unsigned char x0[1]; } *_dataset;
    KVDatasetInfo *_datasetInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)datasetInfo;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithData:(id)a0 dataset:(const struct Dataset { unsigned char x0[1]; } *)a1 error:(id *)a2;

@end
