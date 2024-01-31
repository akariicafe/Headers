@class SGReminder, NSString;

@interface SGRealtimeReminder : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SGReminder *reminder;
@property (readonly, nonatomic) NSString *notes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReminder:(id)a0 notes:(id)a1;
- (BOOL)isEqualToRealtimeReminder:(id)a0;

@end
