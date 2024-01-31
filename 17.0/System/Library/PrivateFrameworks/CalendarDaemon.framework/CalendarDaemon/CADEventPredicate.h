@class NSString, NSSet, NSTimeZone;

@interface CADEventPredicate : EKPredicate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long propertyLoadMode;
@property (readonly, nonatomic) NSString *eventUUID;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL shouldLoadProposedTimesInRange;
@property (nonatomic) BOOL excludeAllDayEvents;
@property (nonatomic) BOOL excludeTimedEvents;
@property (nonatomic) BOOL excludeDeclined;
@property (nonatomic) BOOL excludeProposed;
@property (nonatomic) BOOL excludeDeclinedUnlessProposed;
@property (nonatomic) BOOL excludeNoAttendeeEvents;
@property (nonatomic) BOOL excludeNoLocationEvents;
@property (retain, nonatomic) NSSet *filteredOutTitles;
@property (nonatomic) BOOL randomize;
@property (nonatomic) long long limit;

+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 propertyLoadMode:(unsigned long long)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 eventUUID:(id)a3 calendars:(id)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3;

- (id)predicateFormat;
- (id)relatedObjectPropertiesToLoad;
- (void)encodeWithCoder:(id)a0;
- (id)defaultPropertiesToLoad;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beginSignpostWithHandle:(id)a0 signpostID:(unsigned long long)a1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 propertyLoadMode:(unsigned long long)a4;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 eventUUID:(id)a3 calendars:(id)a4;

@end
