@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    struct { unsigned char alignment : 4; unsigned int refCount : 24; unsigned char unused : 4; } _flags;
    double _location;
    id _reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) NSDictionary *options;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)columnTerminatorsForLocale:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)tabStopType;
- (id)description;
- (id)initWithType:(unsigned long long)a0 location:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithTextAlignment:(long long)a0 location:(double)a1 options:(id)a2;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
