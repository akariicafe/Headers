@interface SNRecordOperator : NSObject <SNOperator> {
    void /* unknown type, empty encoding */ format;
    void /* unknown type, empty encoding */ outputFile;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSaveDestination:(id)a0 format:(id)a1 error:(id *)a2;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
