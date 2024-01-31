@class NSSet, NSDate;

@interface _SFContextualNamedEntitySource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *sourceApplications;
@property (readonly, copy, nonatomic) NSDate *fromDate;
@property (readonly, copy, nonatomic) NSDate *toDate;
@property (readonly, nonatomic) long long limit;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceApplications:(id)a0 fromDate:(id)a1 toDate:(id)a2 limit:(long long)a3;

@end
