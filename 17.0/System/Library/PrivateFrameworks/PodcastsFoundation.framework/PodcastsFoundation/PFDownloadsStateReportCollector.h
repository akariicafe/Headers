@interface PFDownloadsStateReportCollector : NSObject {
    void /* unknown type, empty encoding */ checker;
}

- (id)init;
- (void).cxx_destruct;
- (void)generateReportWithCompletionHandler:(id /* block */)a0;
- (id)initWithManagedObjectContext:(id)a0 episodePropertiesToReport:(id)a1 showPropertiesToReport:(id)a2;

@end
