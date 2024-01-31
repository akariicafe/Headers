@interface IAStringDetails : NSObject

@property (nonatomic) long long characters;
@property (nonatomic) long long emojiCharacters;
@property (nonatomic) long long punctuationCharacters;

+ (id)getDetailsForString:(id)a0;

@end
