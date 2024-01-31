@class NSString, NSSet, NSPredicate, NSDateInterval;

@interface PPSDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *category;
@property (readonly) long long requestType;
@property (readonly, copy) NSSet *metrics;
@property (readonly) NSPredicate *predicate;
@property (readonly, copy) NSString *subsystem;
@property (readonly) NSDateInterval *timeFilter;
@property (readonly) NSPredicate *valueFilter;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestType:(long long)a0 metrics:(id)a1 predicate:(id)a2 timeFilter:(id)a3;

@end
