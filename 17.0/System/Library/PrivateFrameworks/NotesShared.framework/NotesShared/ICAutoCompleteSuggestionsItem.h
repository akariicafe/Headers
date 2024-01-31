@class NSString, UIImage, NSObject;

@interface ICAutoCompleteSuggestionsItem : NSObject

@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *shortText;
@property (readonly, copy, nonatomic) NSString *rightText;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSString *parentNoteIdentifier;
@property (readonly, nonatomic) BOOL isEmptyPlaceholder;
@property (readonly, nonatomic) BOOL isCreationSuggestion;
@property (readonly, nonatomic) BOOL isSectionHeader;
@property (readonly, nonatomic) NSObject *representedObject;
@property (readonly, nonatomic) UIImage *iconImage;

- (void).cxx_destruct;
- (id)initWithDisplayText:(id)a0 isSectionHeader:(BOOL)a1;
- (id)initWithDisplayText:(id)a0 representedObject:(id)a1 isEmptyPlaceholder:(BOOL)a2;
- (id)initWithDisplayText:(id)a0 shortText:(id)a1 representedObject:(id)a2;
- (id)initWithDisplayText:(id)a0 shortText:(id)a1 rightText:(id)a2 uuidString:(id)a3 isEmptyPlaceholder:(BOOL)a4 isSectionHeader:(BOOL)a5 isCreationSuggestion:(BOOL)a6 iconImage:(id)a7 parentNoteIdentifier:(id)a8 representedObject:(id)a9;
- (id)initWithDisplayText:(id)a0 shortText:(id)a1 uuidString:(id)a2 iconImage:(id)a3;
- (id)initWithDisplayText:(id)a0 shortText:(id)a1 uuidString:(id)a2 isEmptyPlaceholder:(BOOL)a3 iconImage:(id)a4 representedObject:(id)a5;
- (id)initWithDisplayText:(id)a0 shortText:(id)a1 uuidString:(id)a2 isEmptyPlaceholder:(BOOL)a3 isSectionHeader:(BOOL)a4 iconImage:(id)a5 representedObject:(id)a6;

@end
