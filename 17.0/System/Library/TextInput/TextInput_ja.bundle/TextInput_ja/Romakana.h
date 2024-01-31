@class NSCharacterSet;

@interface Romakana : NSObject {
    NSCharacterSet *_consonantsCharacterSet;
}

+ (struct { id x0; id x1; })splitRomaji:(id)a0 at:(unsigned long long)a1;
+ (id)hiraganaString:(id)a0 mappingArray:(id)a1;
+ (id)kanaSymbol:(id)a0;
+ (id)romajiString:(id)a0;

- (void).cxx_destruct;
- (id)adjustIncompleteRomaji:(id)a0;
- (id)hiraganaFromRomaji:(id)a0 stripIncompleteRomajiAtEnd:(BOOL)a1 strippedLength:(unsigned long long *)a2;

@end
