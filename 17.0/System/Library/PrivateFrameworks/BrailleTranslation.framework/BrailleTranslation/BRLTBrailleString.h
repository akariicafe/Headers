@class NSString, NSArray, NSMutableArray;

@interface BRLTBrailleString : NSObject <NSCopying> {
    NSMutableArray *_brailleChars;
}

@property (readonly, nonatomic) NSString *unicode;
@property (readonly, nonatomic) NSArray *brailleChars;
@property (readonly, nonatomic) unsigned long long length;

+ (id)brfTable;
+ (id)brfToUnicode:(id)a0;
+ (id)dinToUnicode:(id)a0;
+ (BOOL)isValidBRF:(id)a0;
+ (id)unicodeToBestEffortBrf:(id)a0;
+ (id)unicodeToDin:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bestEffortBrf;
- (id)initWithBrailleChars:(id)a0;
- (id)initWithBrf:(id)a0;
- (id)initWithUnicode:(id)a0;
- (BOOL)isEqualToBrailleString:(id)a0;

@end
