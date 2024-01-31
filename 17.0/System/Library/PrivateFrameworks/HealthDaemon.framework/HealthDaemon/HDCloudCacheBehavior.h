@class HDProfile;

@interface HDCloudCacheBehavior : NSObject {
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL shouldFetchSharingRecords;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)unitTest_setShouldFetchSharingRecords:(BOOL)a0;

@end
