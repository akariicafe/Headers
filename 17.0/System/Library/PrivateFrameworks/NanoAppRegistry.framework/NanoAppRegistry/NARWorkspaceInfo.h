@class NSArray, NSUUID, NSNumber;

@interface NARWorkspaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *applications;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic) NSArray *standaloneGlances;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithApplications:(id)a0 UUID:(id)a1 sequenceNumber:(id)a2;
- (id)initWithApplications:(id)a0 UUID:(id)a1 sequenceNumber:(id)a2 standaloneGlances:(id)a3;

@end
