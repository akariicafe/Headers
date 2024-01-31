@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject {
    id /* block */ _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    long long _qualityOfService;
    double _creationTime;
}

- (id)description;
- (void).cxx_destruct;

@end
