@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {
    BRLTBrailleString *_brailleString;
}

@property (readonly, nonatomic) BRLTBrailleString *brailleString;
@property (nonatomic) unsigned long long cursor;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deleteBrailleChar;
- (id)initWithBrailleString:(id)a0;
- (void)insertBrailleChar:(id)a0;
- (void)insertBrailleChar:(id)a0 modifiers:(id)a1 inputMode:(unsigned long long)a2;

@end
