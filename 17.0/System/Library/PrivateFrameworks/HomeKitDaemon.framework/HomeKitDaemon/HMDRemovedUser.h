@class HMDUser, NSString, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *mergeID;
@property (getter=isRemovalInProgress) BOOL removalInProgress;

+ (id)removedUserWithUser:(id)a0;

- (BOOL)isEqualToUser:(id)a0;
- (BOOL)isExpired;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUser:(id)a0 expiration:(id)a1;
- (BOOL)isEqualToUserID:(id)a0;

@end
