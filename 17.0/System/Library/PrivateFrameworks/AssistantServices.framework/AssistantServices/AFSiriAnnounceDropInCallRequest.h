@interface AFSiriAnnounceDropInCallRequest : NSObject <AFSiriExternalRequest> {
    long long _announcementType;
}

- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithAnnouncementType:(long long)a0;

@end
