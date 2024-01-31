@class NSString;

@interface FTMutableTextToSpeechResource : FTTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *identifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
