@interface CRTextRecognizerModelJapaneseV3 : CRTextSequenceRecognizerTopKModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })characterBoxesOffsets;
- (BOOL)supportCharacterBoxes;

@end
