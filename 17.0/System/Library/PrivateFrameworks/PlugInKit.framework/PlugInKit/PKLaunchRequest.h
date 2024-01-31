@class NSUUID, NSString;
@protocol PKPersona;

@interface PKLaunchRequest : NSObject <PKLaunchRequest>

@property (copy) NSUUID *uuid;
@property (retain) id<PKPersona> launchPersona;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)launchRequestWithUUID:(id)a0 launchPersona:(id)a1;

- (void).cxx_destruct;
- (id)_initWithUUID:(id)a0 launchPersona:(id)a1;

@end
