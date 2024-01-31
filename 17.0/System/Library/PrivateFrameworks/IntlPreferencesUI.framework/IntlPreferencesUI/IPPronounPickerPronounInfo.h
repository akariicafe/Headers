@class NSString, UITextField, UILabel, NSMorphology;

@interface IPPronounPickerPronounInfo : NSObject

@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *validationErrorMessage;
@property (retain, nonatomic) UITextField *entryField;
@property (retain, nonatomic) UILabel *exampleLabel;
@property (retain, nonatomic) NSString *exampleText;
@property (retain, nonatomic) NSString *examplePlaceholder;
@property (retain, nonatomic) NSMorphology *morphology;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL textWasEnteredByUser;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (readonly, nonatomic) BOOL hasValidValue;

- (void).cxx_destruct;
- (void)autofillValue:(id)a0;
- (void)entryFieldContentDidChange:(id)a0 validator:(id)a1 userEntered:(BOOL)a2;
- (id)generateExampleLabelText;
- (id)initWithExampleText:(id)a0 examplePlaceholder:(id)a1 morphology:(id)a2 language:(id)a3;

@end
