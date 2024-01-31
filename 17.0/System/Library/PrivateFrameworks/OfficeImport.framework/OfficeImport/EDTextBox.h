@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;

- (id)description;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (id)protection;
- (void)setProtection:(id)a0;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)a0;

@end
