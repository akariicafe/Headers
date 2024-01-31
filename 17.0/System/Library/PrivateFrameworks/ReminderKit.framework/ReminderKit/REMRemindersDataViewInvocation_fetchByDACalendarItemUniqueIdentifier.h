@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *daCalendarItemUniqueIdentifiers;
@property (readonly, nonatomic) REMObjectID *listObjectID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)a0 listObjectID:(id)a1;

@end
