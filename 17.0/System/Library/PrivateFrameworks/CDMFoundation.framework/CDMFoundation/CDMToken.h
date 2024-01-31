@class NSString, NSArray, NSMutableArray;

@interface CDMToken : NSObject

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) long long begin;
@property (readonly, nonatomic) long long end;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) BOOL isWhiteSpace;
@property (readonly, nonatomic) NSArray *cleanValues;
@property (readonly, nonatomic, getter=getHasCleanValues) BOOL hasCleanValues;
@property (readonly, nonatomic) NSString *cleanValue;
@property (readonly, nonatomic) long long tokenIndex;
@property (readonly, nonatomic) long long nonWhitespaceTokenIndex;
@property (readonly, nonatomic) NSMutableArray *normalizedValues;

- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addNormalizedValue:(id)a0;
- (BOOL)hasValue:(id)a0 from:(long long)a1 to:(long long)a2;
- (id)initWithProtoToken:(id)a0;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(BOOL)a3;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(BOOL)a3 whitespace:(BOOL)a4;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(BOOL)a3 whitespace:(BOOL)a4 cleanValue:(id)a5;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(BOOL)a3 whitespace:(BOOL)a4 cleanValue:(id)a5 tokenIndex:(long long)a6 nonWhitespaceTokenIndex:(long long)a7;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(BOOL)a3 whitespace:(BOOL)a4 cleanValue:(id)a5 tokenIndex:(long long)a6 nonWhitespaceTokenIndex:(long long)a7 normalizedValues:(id)a8;

@end
