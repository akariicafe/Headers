@class FBSDisplayIdentity, NSString, EXBDisplayProfile, EXBDisplayAssertion;
@protocol EXBDisplayControlling;

@interface EXBDisplayDriverRecord : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) id<EXBDisplayControlling> controller;
@property (readonly, nonatomic) EXBDisplayAssertion *assertion;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, nonatomic) EXBDisplayProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)associateController:(id)a0 assertion:(id)a1;
- (void)associateDisplay:(id)a0;
- (id)initWithProfile:(id)a0 rootDisplay:(id)a1;

@end
