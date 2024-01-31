@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayLabel;
@property (copy, nonatomic) NSString *partNumber;
@property (copy, nonatomic) NSNumber *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)HTTPBodyDictionary;
- (id)initWithAmountDictionary:(id)a0;

@end
