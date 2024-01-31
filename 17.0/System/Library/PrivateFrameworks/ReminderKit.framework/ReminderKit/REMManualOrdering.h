@class NSString, NSArray, NSDictionary, NSDate, REMObjectID;

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) short listType;
@property (readonly, nonatomic) NSString *listID;
@property (readonly, nonatomic) NSArray *topLevelElementIDs;
@property (readonly, nonatomic) NSDictionary *secondaryLevelElementIDsByTopLevelElementID;
@property (readonly, nonatomic) REMObjectID *uncommitedElementsAccountID;
@property (readonly, nonatomic) NSDate *modifiedDate;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)remObjectID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectID:(id)a0 listType:(short)a1 listID:(id)a2 topLevelElementIDs:(id)a3 secondaryLevelElementIDsByTopLevelElementID:(id)a4 uncommitedElementsAccountID:(id)a5 modifiedDate:(id)a6;
- (id)initWithObjectID:(id)a0 listType:(short)a1 listID:(id)a2 modifiedDate:(id)a3;

@end
