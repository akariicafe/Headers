@class NSString, NSMutableArray;

@interface TSCEQuotedRefPathSplitter : NSObject {
    NSMutableArray *_quotedComponents;
}

@property (retain, nonatomic) NSString *localizedBlankGroupName;
@property (retain, nonatomic) NSString *localizedErrorGroupName;
@property (retain, nonatomic) NSString *localizedTrueGroupName;
@property (retain, nonatomic) NSString *localizedFalseGroupName;
@property (retain, nonatomic) NSString *localizedTrueGroupNameForColumn;
@property (retain, nonatomic) NSString *localizedFalseGroupNameForColumn;
@property (nonatomic) BOOL forceSplitting;

+ (id)refPathInterestingCharactersSet;
+ (BOOL)isLeftParen:(id)a0;
+ (BOOL)isRightParen:(id)a0;
+ (BOOL)isSingleQuote:(id)a0;

- (void)addComponent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)componentAtIndex:(unsigned long long)a0;
- (id)initWithComponents:(id)a0 aggregateFunction:(id)a1;
- (id)initWithReferenceString:(id)a0;
- (unsigned long long)numComponents;
- (void)splitRefPath:(id)a0;

@end
