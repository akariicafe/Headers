@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {
    BOOL _suspended;
    NSArray *_authorizedSamples;
    unsigned long long _clientSampleIndex;
}

@property (readonly, nonatomic) unsigned long long maxResults;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) BOOL includeDocumentData;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (BOOL)validateConfiguration:(id *)a0;

@end
