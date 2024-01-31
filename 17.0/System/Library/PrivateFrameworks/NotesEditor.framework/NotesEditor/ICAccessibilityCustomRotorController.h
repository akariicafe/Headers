@class NSArray, UIAccessibilityCustomRotor, ICNoteEditorViewController;

@interface ICAccessibilityCustomRotorController : NSObject

@property (retain, nonatomic) UIAccessibilityCustomRotor *storedLinksRotor;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedChecklistRotor;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedAttachmentsRotor;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedTablesRotor;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedTagsRotor;
@property (retain, nonatomic) UIAccessibilityCustomRotor *storedMentionsRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *linksRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *checklistRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *attachmentsRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *tagsRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *mentionsRotor;
@property (readonly, nonatomic) UIAccessibilityCustomRotor *tablesRotor;
@property (readonly, nonatomic) NSArray *sharedTextViewRotors;
@property (weak, nonatomic) ICNoteEditorViewController *noteEditorViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)searchForAXElementWithPredicate:(id)a0 rotorType:(id)a1;

@end
