@class NSUUID, NSString;

@interface HDIDSInvitation : NSObject

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *fromID;
@property (readonly, copy, nonatomic) id codableObject;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 fromID:(id)a1 codableObject:(id)a2;

@end
