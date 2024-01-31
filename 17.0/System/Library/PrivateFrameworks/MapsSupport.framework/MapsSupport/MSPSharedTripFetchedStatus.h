@interface MSPSharedTripFetchedStatus : NSObject {
    double _fetchedTimestamp;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isFailedRequest) BOOL failedRequest;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStatus:(long long)a0;

@end
