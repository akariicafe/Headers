@class NSString;

@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
}

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;

@end
