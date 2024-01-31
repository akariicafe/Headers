@class NSArray, NSString, NSDate;

@interface WFContextualActionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *historicalActionIdentifiers;
@property (retain, nonatomic) NSDate *preciseTimestamp;
@property (retain, nonatomic) NSString *staccatoInteractionType;
@property (nonatomic) unsigned long long surface;
@property (retain, nonatomic) NSArray *files;
@property (nonatomic) BOOL allowsExpensiveFetch;

- (id)initWithSurface:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSurface:(unsigned long long)a0 staccatoInteractionType:(id)a1 preciseTimestamp:(id)a2;

@end
