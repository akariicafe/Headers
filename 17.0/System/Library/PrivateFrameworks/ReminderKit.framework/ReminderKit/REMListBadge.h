@class NSString;

@interface REMListBadge : NSObject

@property (copy, nonatomic) NSString *emblem;
@property (copy, nonatomic) NSString *emoji;
@property (readonly, copy, nonatomic) NSString *rawValue;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEmoji:(id)a0;
- (id)initWithEmblem:(id)a0;
- (id)initWithRawValue:(id)a0;
- (id)_emojiFromRawString:(id)a0;
- (BOOL)_isJSONString:(id)a0;
- (BOOL)_isSingleCharacterEmoji:(id)a0;

@end
