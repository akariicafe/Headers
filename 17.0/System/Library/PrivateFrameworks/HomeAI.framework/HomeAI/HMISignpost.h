@class NSUUID, NSString, NSDate;

@interface HMISignpost : HMFObject <HMFLogging>

@property (readonly) NSDate *beginDate;
@property (readonly) unsigned long long signpostIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)begin;
- (void)end;
- (id)initWithName:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)signpostLog;
- (BOOL)hasBegun;
- (id)initWithName:(id)a0 deferred:(BOOL)a1;
- (BOOL)shouldSignpost;

@end
