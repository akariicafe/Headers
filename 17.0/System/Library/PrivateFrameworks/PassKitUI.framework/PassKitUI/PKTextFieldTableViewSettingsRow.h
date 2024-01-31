@class NSString, PKTextFieldTableViewSettingsRowFormatter;
@protocol NSCopying;

@interface PKTextFieldTableViewSettingsRow : NSObject <UITextFieldDelegate, PKTableViewSettingsRow> {
    PKTextFieldTableViewSettingsRowFormatter *_formatter;
}

@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) id<NSCopying> identifier;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (BOOL)shouldHighlight;
- (void)_textFieldValueChanged:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 value:(id)a2 formatter:(id)a3 changeHandler:(id /* block */)a4;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
