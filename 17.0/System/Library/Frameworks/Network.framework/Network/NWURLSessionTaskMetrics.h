@class NSArray, NSObject, NSDateInterval;
@protocol OS_nw_protocol_metadata;

@interface NWURLSessionTaskMetrics : NSURLSessionTaskMetrics {
    NSObject<OS_nw_protocol_metadata> *_clientMetadata;
}

@property (readonly, copy, nonatomic) NSArray *transactionMetrics;
@property (readonly, copy, nonatomic) NSDateInterval *taskInterval;
@property (readonly, nonatomic) unsigned long long redirectCount;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;

@end
