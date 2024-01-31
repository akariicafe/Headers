@interface REMReminderFetchOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) REMReminderFetchOptions *defaultFetchOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL includeConcealed;
@property (nonatomic) BOOL includeDueDateDeltaAlerts;

+ (id)fetchOptionsIncludingDueDateDeltaAlerts;
+ (id)fetchOptionsIncludingConcealed;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fetchOptionsIncludingDueDateDeltaAlerts;
- (id)fetchOptionsIncludingConcealed;

@end
