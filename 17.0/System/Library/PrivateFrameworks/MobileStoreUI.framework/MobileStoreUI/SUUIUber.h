@class NSString, SUUIColorScheme;
@protocol SUUIArtworkProviding;

@interface SUUIUber : NSObject

@property (readonly, nonatomic) id<SUUIArtworkProviding> artworkProvider;
@property (readonly, nonatomic) SUUIColorScheme *colorScheme;
@property (readonly, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithUberDictionary:(id)a0;

@end
