@interface _EXExtensionAvailablility : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long enabledCount;
@property long long disabledCount;
@property long long unelectedCount;

+ (id)addChangeObserver:(id /* block */)a0;
+ (void)removeChangeObserver:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
