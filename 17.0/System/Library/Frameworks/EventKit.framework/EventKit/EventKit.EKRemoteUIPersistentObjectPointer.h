@interface EventKit.EKRemoteUIPersistentObjectPointer : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ objectID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPendingInsert;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
