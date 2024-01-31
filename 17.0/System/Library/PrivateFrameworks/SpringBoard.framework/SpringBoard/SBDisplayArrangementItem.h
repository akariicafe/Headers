@class NSString, FBSDisplayIdentity;

@interface SBDisplayArrangementItem : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayIdentity *relativeDisplayIdentity;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_preferredArrangementOfExternalDisplay:(id)a0 relativeToEmbeddedDisplay:(id)a1 preferences:(id)a2;
+ (id)preferredArrangementOfDisplay:(id)a0 relativeTo:(id)a1 preferences:(id)a2;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayIdentity:(id)a0 relativeDisplayIdentity:(id)a1 edge:(unsigned int)a2 offset:(double)a3;

@end
