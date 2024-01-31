@class NSString, NSArray, NSDate;

@interface ICEvernoteNote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSDate *updated;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *resources;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
