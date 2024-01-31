@class NSArray;

@interface MSVSystemDialogResponse : NSObject

@property (readonly, nonatomic) long long buttonIdentifier;
@property (readonly, nonatomic) NSArray *textFieldValues;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 textFieldValues:(id)a1;

@end
