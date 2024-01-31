@class NSString;

@interface PKAccountDailyCashDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic, getter=isCurrent) BOOL current;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(unsigned long long)a0 isCurrent:(BOOL)a1 localizedTitle:(id)a2 localizedSubtitle:(id)a3;

@end
