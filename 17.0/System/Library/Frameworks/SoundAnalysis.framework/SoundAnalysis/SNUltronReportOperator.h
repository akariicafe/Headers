@interface SNUltronReportOperator : NSObject <SNOperator> {
    void /* unknown type, empty encoding */ recordOperator;
    void /* unknown type, empty encoding */ destinationDirectory;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ requestDescription;
    void /* unknown type, empty encoding */ buildVersion;
    void /* unknown type, empty encoding */ detectionResults;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDestinationDirectory:(id)a0 date:(id)a1 requestDescription:(id)a2 buildVersion:(id)a3 format:(id)a4 error:(id *)a5;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
