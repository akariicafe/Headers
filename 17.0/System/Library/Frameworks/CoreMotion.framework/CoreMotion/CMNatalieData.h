@class NSUUID, NSNumber, NSDate;

@interface CMNatalieData : CMLogItem {
    long long fRecordId;
    double fStartDate;
    long long fActivityType;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

@property (readonly, nonatomic) long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSNumber *natalies;
@property (readonly, nonatomic) NSNumber *basalNatalies;
@property (readonly, nonatomic) long long activityType;

+ (BOOL)supportsSecureCoding;
+ (id)maxNatalieEntries;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(double)a0 recordId:(long long)a1 activityType:(long long)a2 mets:(double)a3 natalies:(double)a4 basalNatalies:(double)a5 sourceId:(id)a6;

@end
