@class NSString, NSUUID, NSDate;

@interface LogQuantityIntentResponse : INIntentResponse

@property (nonatomic) double doubleValue;
@property (nonatomic, copy) NSString *units;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSUUID *uuidOfLastSavedSample;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
