@class NSArray, NSString;

@interface GDViewQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSString *schedule;
@property (readonly, nonatomic) BOOL includeDependencies;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAll;
- (id)initWithNames:(id)a0 includeDependencies:(BOOL)a1;
- (id)initWithSchedule:(id)a0 includeDependencies:(BOOL)a1;

@end
