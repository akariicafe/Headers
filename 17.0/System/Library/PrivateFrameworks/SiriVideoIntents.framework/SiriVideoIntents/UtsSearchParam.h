@class NSString, NSArray;

@interface UtsSearchParam : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSArray *values;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
