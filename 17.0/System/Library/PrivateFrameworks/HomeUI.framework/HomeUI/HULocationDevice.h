@class NSString, NAIdentity;

@interface HULocationDevice : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFMFDevice:(id)a0;
- (id)initWithHMDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 currentDevice:(BOOL)a2;

@end
