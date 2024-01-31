@class NSDate;

@interface CMIndoorOutdoorState : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    long long fType;
    long long fConfidence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long confidence;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(id)a0 type:(long long)a1 confidence:(long long)a2;

@end
