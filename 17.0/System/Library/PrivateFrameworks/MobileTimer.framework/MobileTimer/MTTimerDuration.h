@class NSString, MTSound, NSDate;

@interface MTTimerDuration : NSObject <NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *lastModified;
@property (retain, nonatomic) MTSound *sound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hashString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 duration:(double)a1;
- (id)initWithTitle:(id)a0 duration:(double)a1 sound:(id)a2;
- (id)initWithTitle:(id)a0 duration:(double)a1 sound:(id)a2 lastModified:(id)a3;
- (BOOL)isEqualToDuration:(id)a0;

@end
