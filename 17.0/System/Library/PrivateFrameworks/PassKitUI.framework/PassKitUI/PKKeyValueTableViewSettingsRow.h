@class UIColor, NSString;
@protocol NSCopying;

@interface PKKeyValueTableViewSettingsRow : NSObject <PKTableViewSettingsRow> {
    NSString *_sectionID;
}

@property (copy, nonatomic) UIColor *secondaryTextColor;
@property (copy, nonatomic) UIColor *primaryTextColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSCopying> identifier;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldHighlight;
- (id)initWithIdentifier:(id)a0 title:(id)a1 value:(id)a2;
- (id)initWithIdentifier:(id)a0 title:(id)a1 value:(id)a2 sectionID:(id)a3;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
