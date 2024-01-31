@class NSArray;

@interface SPResultSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *resultSections;
@property (readonly, nonatomic) NSArray *stableSections;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSections:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSections:(id)a0 stableSections:(id)a1;

@end
