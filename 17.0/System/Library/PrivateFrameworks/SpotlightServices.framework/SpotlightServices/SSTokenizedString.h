@class NSString, NSArray;

@interface SSTokenizedString : NSObject {
    BOOL _shouldTokenize;
}

@property (retain) NSString *locale;
@property (retain) NSString *original;
@property (retain) NSArray *tokens;

- (id)initWithString:(id)a0 locale:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasPrefixForMatchInfoToken:(id)a0;
- (id)tokenMatchForMatchInfoToken:(id)a0;
- (id)tokenize;

@end
