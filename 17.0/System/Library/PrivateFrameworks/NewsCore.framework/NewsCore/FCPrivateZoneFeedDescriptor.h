@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
}

@property (retain, nonatomic) FCPrivateDataController *privateDataController;

- (long long)feedType;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;

@end
