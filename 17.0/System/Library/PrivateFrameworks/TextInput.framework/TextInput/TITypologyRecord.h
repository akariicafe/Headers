@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (void)replaceDocumentState:(id)a0;
- (id)init;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)currentKeyboardState;
- (void).cxx_destruct;
- (id)textSummary;
- (id)initWithCoder:(id)a0;
- (void)removeContextFromKeyboardState;
- (id)changedText;
- (id)textSummaryForAutocorrection:(id)a0;

@end
