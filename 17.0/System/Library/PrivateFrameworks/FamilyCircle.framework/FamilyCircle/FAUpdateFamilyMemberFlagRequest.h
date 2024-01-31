@class NSDictionary, NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSString *_flag;
    BOOL _enabled;
}

@property (retain, nonatomic) NSDictionary *ephemeralAuthResults;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)a0 ephemeralAuthResults:(id)a1 flag:(id)a2 enabled:(BOOL)a3;
- (id)initWithFamilyMemberDSID:(id)a0 flag:(id)a1 enabled:(BOOL)a2;

@end
