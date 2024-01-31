@class TTParagraphStyle, NSObject;

@interface REMTTParagraphStyle : NSObject

@property (retain, nonatomic) TTParagraphStyle *innerStyle;
@property (readonly, nonatomic) NSObject *attributedValue;
@property (readonly, nonatomic) long long remParagraphStyle;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContents:(id)a0;
- (id)listBulletInAttributedString:(id)a0 atIndex:(unsigned long long)a1;

@end
