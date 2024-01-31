@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject

@property (readonly, nonatomic) NSScanner *_scanner;
@property (readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet;
@property (copy, nonatomic) id /* block */ parsedCharactersBlock;
@property (copy, nonatomic) id /* block */ parsedTagBlock;
@property (copy, nonatomic) id /* block */ parsedEntityBlock;
@property (copy, nonatomic) id /* block */ parsedErrorBlock;

- (void)parse;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)_isAtEnd;
- (BOOL)_parseCharacters;
- (BOOL)_parseEntity;
- (BOOL)_parseTag;
- (BOOL)_tryScanningUsingBlock:(id /* block */)a0;

@end
