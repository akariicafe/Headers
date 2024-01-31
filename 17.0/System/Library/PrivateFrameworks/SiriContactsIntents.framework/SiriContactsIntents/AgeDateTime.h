@class NSDateComponents;

@interface AgeDateTime : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic) long long qualifier;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
