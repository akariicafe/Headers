@class NSArray, SAUIConfirmationView, NSNumber, SAUITemplateButton;

@interface SAVCSContentCabinet : SAUISnippet

@property (nonatomic) BOOL browseResults;
@property (retain, nonatomic) SAUIConfirmationView *confirmationView;
@property (retain, nonatomic) SAUITemplateButton *foregroundAppButton;
@property (copy, nonatomic) NSNumber *fullScreenEnabled;
@property (copy, nonatomic) NSArray *shelves;

+ (id)contentCabinet;
+ (id)contentCabinetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
