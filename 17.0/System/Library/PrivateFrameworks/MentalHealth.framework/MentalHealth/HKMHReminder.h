@class NSDateComponents;

@interface HKMHReminder : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isEnabled;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateComponents:(id)a0 isEnabled:(BOOL)a1;

@end
