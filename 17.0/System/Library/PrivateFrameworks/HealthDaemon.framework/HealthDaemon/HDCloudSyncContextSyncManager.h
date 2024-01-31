@class HDProfile;

@interface HDCloudSyncContextSyncManager : NSObject {
    HDProfile *_profile;
}

- (id)push:(id /* block */)a0;
- (id)initWithProfile:(id)a0;
- (id)pull:(id /* block */)a0;
- (void).cxx_destruct;

@end
