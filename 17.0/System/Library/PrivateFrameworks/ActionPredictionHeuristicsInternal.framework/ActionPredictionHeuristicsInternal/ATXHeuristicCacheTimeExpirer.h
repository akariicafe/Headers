@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFireDate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
