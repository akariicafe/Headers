@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSSecureCoding> {
    NSString *_type;
    NSString *_qualifier;
    id<NSObject> _criteria;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)criteria;
- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id)initWithCoder:(id)a0;
- (id)qualifier;
- (id)initWithCriteria:(id)a0 allRequired:(BOOL)a1;
- (id)initWithType:(id)a0 qualifier:(id)a1 expression:(id)a2;
- (id)_initWithType:(id)a0 qualifier:(id)a1 criteria:(id)a2;

@end
