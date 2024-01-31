@class NSString, NSArray;

@interface MCSyntheticInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *committedText;
@property (readonly, nonatomic) NSString *uncommittedText;
@property (readonly, nonatomic) NSArray *syllables;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long cursorIndex;
@property (nonatomic) BOOL includeSuffixAsSearchString;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalSuffix;
- (id)initWithCommittedText:(id)a0 syllables:(id)a1;
- (int)syllableIndex:(int *)a0;
- (id)syntheticInputWithCommittedText:(id)a0 syllables:(id)a1;
- (id)syntheticInputWithCursorIndex:(unsigned long long)a0;

@end
