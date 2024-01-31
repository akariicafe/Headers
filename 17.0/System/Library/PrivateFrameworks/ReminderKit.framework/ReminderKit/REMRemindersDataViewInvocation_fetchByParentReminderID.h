@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) BOOL includeUnsupported;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParentReminderID:(id)a0 accountID:(id)a1 includeUnsupported:(BOOL)a2;

@end
