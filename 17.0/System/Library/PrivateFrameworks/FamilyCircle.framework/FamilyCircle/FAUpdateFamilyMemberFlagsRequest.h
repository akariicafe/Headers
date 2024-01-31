@class NSNumber, NSDictionary;

@interface FAUpdateFamilyMemberFlagsRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSDictionary *_flags;
}

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)a0 flags:(id)a1;

@end
