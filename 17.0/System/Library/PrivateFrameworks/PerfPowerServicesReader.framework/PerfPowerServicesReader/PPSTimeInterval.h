@class NSDictionary;

@interface PPSTimeInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *dictionary;
@property (readonly) double duration;
@property (readonly) double endTimestamp;
@property (readonly) NSDictionary *payload;
@property (readonly) double startTimestamp;

- (unsigned long long)hash;
- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsTimestamp:(double)a0;
- (BOOL)intersectsTimeInterval:(id)a0;
- (BOOL)containsTimeInterval:(id)a0;
- (id)initWithStartTimestamp:(double)a0 endTimestamp:(double)a1 payload:(id)a2;
- (id)intersectionWithTimeInterval:(id)a0;
- (BOOL)isAdjacentToTimeInterval:(id)a0;
- (id)subtractTimeInterval:(id)a0;
- (id)unionWithTimeInterval:(id)a0;

@end
