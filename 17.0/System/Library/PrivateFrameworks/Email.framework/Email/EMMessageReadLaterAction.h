@class NSDate;

@interface EMMessageReadLaterAction : EMMessageChangeAction

@property (readonly, nonatomic) NSDate *readLaterDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 readLaterDate:(id)a3;

@end
