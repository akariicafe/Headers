@class NSUUID, NSString, NSURL, NSDate;

@interface SOTimer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *timerID;
@property (readonly, copy, nonatomic) NSURL *timerURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double fireTimeInterval;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimerID:(id)a0 timerURL:(id)a1 isFiring:(BOOL)a2 title:(id)a3 state:(long long)a4 duration:(double)a5 type:(long long)a6 fireTimeInterval:(double)a7 fireDate:(id)a8 firedDate:(id)a9 dismissedDate:(id)a10 lastModifiedDate:(id)a11;

@end
